class Solution {
public:
    bool isPalindrome(string s) {
        int siz = s.length();
        string r;
        for(int i = 0 ;i<siz ; i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                r+=s[i];
            }
            else if(s[i]>=65 && s[i]<=90)
            {

                r+=s[i]+32;
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                r+=s[i];
            }
        }
        int left = 0 ,right = r.length()-1;
        while(left<right)
        {
             if(r[left++]!=r[right--])
             {
                return false;
             }
        }
        return true;

    }
};