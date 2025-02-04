class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merge;
        sort(intervals.begin(),intervals.end());
         
        int front = intervals[0][0],back = intervals[0][1];
        for(int i = 0 ; i< intervals.size()-1; i++)
        {
           if(back>=intervals[i+1][0])  
           {
            back  = max(intervals[i+1][1],back);
           }
           else{
            if(intervals[i+1][1]<=back || intervals[i+1][0]-back >= 1)
            {
                 merge.push_back({front,back});
            }
            if(intervals[i+1][0]>back)  
          {
            front = intervals[i+1][0];
             back = intervals[i+1][1];
             }

           }
        }
                    merge.push_back({front,back});
return merge;
    }
};