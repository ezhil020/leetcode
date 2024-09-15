class Solution {
public:
    int lengthOfLastWord(string s) {
      int siz= s.size()-1,count = 0;
      while(s[siz] == ' ')
      {
        siz--;
      } 
while(siz >= 0 && s[siz] != ' ')
      {
        
        count++;
        siz--;
      }  
      return count;
    }
};