class Solution {
public:
    string reverseWords(string s) {
    string r;
     int siz = s.size(),i=siz-1,count=0,temp;
     while(i>=0)
     {
         if(s[i]!=' ')
         {
           count++;
         }
          else if(count>0){
            temp=i+1;
           while(count>0)
           {
             r+=s[temp];
            temp++;
            count--;
            }   
            r+=s[i];
         }
         i--;
     }
    if(count>0)
    {
     while(count>0)
     {
        r+=s[++i];
        count--;
     }
    }
    else{
        r.pop_back();

    }
     return r;
     }
    
};