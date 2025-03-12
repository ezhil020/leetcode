class Solution {
public:
    int numberOfSubstrings(string s) {
    unordered_map<char,int> last;
    int left,right,count=0;
    for(int i=0 ; i<s.size();i++){
        last[s[i]] = i;
        if(last.size()==3){
            count +=1;
             count += min({last['a'],last['b'],last['c']});
        }
    }
   
    return count;
    }
};