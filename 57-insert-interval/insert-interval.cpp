class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> result;
        int a, b, j, i = 0;
        bool inserted = false;
        if (intervals.size() == 0) {
            result.push_back({newInterval[0], newInterval[1]});
            return result;
        }

        while (i < intervals.size()) {
            
            if (!inserted) {
                if (intervals[i][0] > newInterval[1]) {
                result.push_back({newInterval[0], newInterval[1]});
                inserted= true;
                  }
                
                else if (newInterval[0] >= intervals[i][0] &&
                    newInterval[0] <= intervals[i][1]) {
                    a = intervals[i][0];
                    if (newInterval[1] >= intervals[i][1]) {
                        j = i + 1;
                        while (j < intervals.size() &&
                               intervals[j][0] <= newInterval[1]) {
                            j++;
                        }
                        i = j;
                        b = max(newInterval[1], intervals[j - 1][1]);
                    } else {
                        b = intervals[i][1];
                        i++;
                    }
                    result.push_back({a, b});
                    inserted = true;
                } else if (intervals[i][1] < newInterval[0]) {
                    result.push_back(intervals[i]);
                    i++;
                }
                   
                 else {
                    a = newInterval[0];
                    j = i + 1;
                    while (j < intervals.size() &&
                           intervals[j][0] <= newInterval[1]) {
                        j++;
                    }
                    b = max(newInterval[1], intervals[j - 1][1]);
                    inserted = true;
                    i = j;

                    result.push_back({a, b});
                }
            }

            else {
                result.push_back(intervals[i]);
                i++;
            }
        }
        if (!inserted) {
            result.push_back({newInterval[0], newInterval[1]});
        }
        return result;
    }
};