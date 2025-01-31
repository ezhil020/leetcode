class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int ,bool> visited;
        int sum = 0 ;
        while(sum!=1){
            sum = 0 ;
            if(visited[n])
            {
                return false;
            }
            else{
            visited[n] = true;
            while(n > 0){
            sum += (n%10)*(n%10) ; 
           n = n/10;
        }}
        n = sum;
    }
    return true;
    }
};