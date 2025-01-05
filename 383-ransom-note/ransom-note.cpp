class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     unordered_map<char,int> magazine_var ;
    for(int i = 0 ;i < magazine.size();i++)
    {
        magazine_var[magazine[i]]++;
    }
    for(int i = 0 ; i < ransomNote.size();i++)
    {
        if(magazine_var[ransomNote[i]] == 0)
        {
            return false;
        }
        else{
            magazine_var[ransomNote[i]]--;
        }
    }
    return true;
    }
};