class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> group;
        unordered_map <string,vector<string>> grps; 
        string sorted_str;
        for(auto str1 : strs){
              sorted_str =  str1;
              sort(sorted_str.begin(),sorted_str.end());
              grps[sorted_str].push_back(str1);

            }
            for(auto& str2 : grps)
            {
            group.push_back(str2.second);
            }
                    return group;

        }

    
};