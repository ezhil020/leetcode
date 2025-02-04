class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0],i=1;
       int curr_sum = nums[0];
        while(i<nums.size())
        {
              if(nums[i-1]<nums[i]){
               curr_sum += nums[i];
              }
              else{
                   sum = max(curr_sum,sum);
                  curr_sum = nums[i];

              }
               sum = max(curr_sum,sum);

              i++;
        }

        return sum;
    }
};