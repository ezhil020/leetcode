class Solution {
public:
    int maxArea(vector<int>& height) {
     int siz = height.size();
     int left = 0,right = siz-1,max_water = 0,water;
     while(left<right)
     {
       water = min(height[left],height[right])*(right-left);
       max_water = max(water,max_water);
       if(height[left]<height[right])
       {
        left++;
       }
       else if(height[left]>height[right])
       {
        right--;
       }
       else{
        left++;
        right--;
       }
       
      }   
      return max_water;
    }
};