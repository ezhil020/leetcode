class Solution {
public:
    bool isSubsequence(string s, string t) {
      int siz = t.length();
      int siz2= s.length();
      int i=0,j=0;
      if(siz2==0)
      {
        return true;
      }
    for(int i = 0 ; i<siz ; i++)
    {
        if(s[j]==t[i])
        {
            
             if(j==siz2-1){
                return true;
             }
             j++;
        }
        
        } 
        return false;
    }
};