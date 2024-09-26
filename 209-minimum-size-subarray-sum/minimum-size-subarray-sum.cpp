class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int siz = nums.size(), j,count,sum=0,minlength=siz+1,left=0;
    for(int i = 0;i<siz;i++)
    {
        sum+=nums[i];
        while(sum>=target)
        {
            minlength=min(minlength,(i-left)+1);
            sum-=nums[left++];
            

         }
     }
    if(minlength==siz+1)
    {
        return 0;
    }
  return minlength;
   }
};