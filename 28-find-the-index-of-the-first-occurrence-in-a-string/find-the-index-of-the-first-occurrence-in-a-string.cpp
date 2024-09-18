class Solution {
public:
    int strStr(string haystack, string needle) {
        int count =1 , i=0,j,ind;
        int siz  = needle.size();
 while(i<haystack.size())
{
       if(haystack[i]==needle[0])
    {
        ind=i;
        j=i+1;
    while(count<siz)
        {
         if(haystack[j]==needle[count])
        {
            count++;
            j++;      
        }
        else{
            count = 1;
            break;
        }
    }
    if(count == siz)
    {
        return ind;
    }
}
i = i+1;
}
return -1;
}
};