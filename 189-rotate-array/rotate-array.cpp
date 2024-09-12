class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        vector<int> temp(n);
        for(int i = 0 ;i<n ; i++)
        {
            temp[i] = nums[((n-k) + i) % n];
        }
        nums = temp;


    
        
        
        
        
        
        
        // int n = nums.size(),element;

        // for(int i = 0 ;i<k ;i++)
        // {
        // element = nums[n-1];
        //  for(int j = n-1 ; j>0;j--)
        //  {
        //      nums[j]=nums[j-1];
        //  }
        //  nums[0]=element;
        // }
        
    }
};