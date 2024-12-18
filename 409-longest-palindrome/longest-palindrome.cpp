class Solution {
public:
    int longestPalindrome(string s) {
    map<char,int> mp;
    bool odd=false ;
    int result=0;
    for(int i = 0 ;i<s.size();i++)
    {
        mp[s[i]]++;
    }  
    for(auto m:mp){
        if(m.second % 2 == 0)
        {
            result += m.second;
        }
        else{
            result += m.second-1;
            odd = true;
        }
    }  
    if(odd)
    {
        return result+=1;
    }
    return result;
    }
};