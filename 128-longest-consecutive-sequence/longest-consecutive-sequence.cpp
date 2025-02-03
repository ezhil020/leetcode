class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> values;
        int count =0,length =0 ,curr;
        for(int i = 0 ;i<nums.size();i++){
         values.insert(nums[i]);
        }
        
        for(auto val: values){
            if(values.find(val-1) == values.end()){
                curr = val;
                count = 1;
                while(values.find(curr+1) != values.end()){
                     curr++;
                     count++;
                }
                length =  max(length,count);
            }
          
        }
        return length;
        
       
    }
};