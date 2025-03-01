class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0 ,i=0,j=0,base = 0,maximum = 0 ;
        for(int i = 0 ; i<s.size();i++){
            count = 0;
            for(j = base;j<i;j++){
                 if(s[j]!=s[i]){
                    count++;
                 }
                 else{
                    base = j+1;
                    break;
                 }

            }
          maximum = max(maximum,count+1);

        }
        
        return maximum;
        }
};