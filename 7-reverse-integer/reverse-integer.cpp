class Solution {
public:
    int reverse(int x) {
      long long int reverse=0;
      int temp;
      long long int num = x   ; 
      while(abs(num) >= 10){
        temp = x%10;
        reverse += temp;
        reverse = reverse*10;
        x = x/10;
        num =  num /10;
      }    
              if(abs(reverse)>2147483647) {return 0;}
   
      reverse += x;
      return reverse;
    }

};