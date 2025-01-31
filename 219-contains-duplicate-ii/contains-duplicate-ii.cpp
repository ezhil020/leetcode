class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> visit;
        for(int i =0;i<nums.size();i++){
       if (visit.count(nums[i]) && i - visit[nums[i]] <= k)
            {
                return true;
            } 
              else{
                    visit[nums[i]] = i; 
              }
         
        

        }
        return false;
        }
    
};