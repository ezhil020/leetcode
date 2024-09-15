class Solution {
public:
    int trap(std::vector<int>& height) {
        if (height.empty()) return 0;  // Early exit if the height array is empty
        
        int left = 0, right = height.size() - 1;  // Initialize two pointers
        int left_max = 0, right_max = 0;          // Track the maximum heights on both sides
        int water_trapped = 0;                    // Accumulate the total water trapped
        
        // Move the pointers towards each other
        while (left < right) {
            // If the left bar is shorter, deal with left side
            if (height[left] < height[right]) {
                if (height[left] >= left_max) {
                    left_max = height[left];  // Update the maximum height on the left
                } else {
                    water_trapped += left_max - height[left];  // Calculate trapped water
                }
                left++;  // Move the left pointer to the right
            }
            // If the right bar is shorter or equal, deal with right side
            else {
                if (height[right] >= right_max) {
                    right_max = height[right];  // Update the maximum height on the right
                } else {
                    water_trapped += right_max - height[right];  // Calculate trapped water
                }
                right--;  // Move the right pointer to the left
            }
        }
        return water_trapped;
    }
};
