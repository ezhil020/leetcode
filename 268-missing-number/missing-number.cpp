class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int sum=0,n = nums.size();
      int sum2=0;
     for(int i = 0 ; i<n ;i++)
     {
        sum += nums[i];
     }
      for(int i = 0; i<= n ;i++)
      {
        sum2 += i;
      }     
       return sum2-sum;
    }
};