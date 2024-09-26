class Solution {
public:
    int lengthOfLongestSubstring(string s)
     {
     int j= 0,count=0,len=1,i;
     if(s.size()==0){
        return 0;
     }
     for( i = 1 ;i<s.size();i++)
        {
            count = j;
            while(count < i)
        {
               if( s[i]!=s[count] )
            {  
                 count++;
            }
            else{
                break;
            }
        }
               if(count<i){
                len = max(len,(i-j));
                j=count+1;
                }
            
        }
        return max(len,i-j);
    }
    
};
