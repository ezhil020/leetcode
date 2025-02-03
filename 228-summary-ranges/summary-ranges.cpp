class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> interval;
        int a =0,b=0,curr=1;
        while( curr < nums.size()){
            while(curr < nums.size() &&nums[b] == nums[curr]-1 ){
                b++;
                curr++;
            }
            if(a!=b){
            interval.push_back(to_string(nums[a]) + "->" + to_string(nums[b]) );
            }
            else{
                interval.push_back(to_string(nums[a]));

            }
            a= curr;
            b= curr;
            curr = curr+1;
        }
        if(a == nums.size()-1){
        interval.push_back(to_string(nums[a]));

        }
        return interval;
    }
};