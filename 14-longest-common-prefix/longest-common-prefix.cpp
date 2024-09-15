class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string a =  strs[0];
     string prx=a;
     for(int i =1 ;i<strs.size();i++)
     {
    
        string b = strs[i];
        int  j=0;
        a=prx;
        prx = "";
        
        while(a[j]==b[j]&&j<b.size()&&j<a.size())
            {
                prx +=a[j];
                j++;
            }
            

            
    
     }
     return prx;
    }
};