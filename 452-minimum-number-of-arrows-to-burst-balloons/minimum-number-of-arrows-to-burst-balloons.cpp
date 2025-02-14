class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
});
     int arrows = 1,i=1; 
     int start = points[0][0];
        int   end = points[0][1];

     while(i<points.size())
     {
       if(points[i][0]>end)
       {
           end =  points[i][1];
           arrows++;
       }
       i++;
     } 
     return arrows;
    }
};