class Solution {
public:
    int myAtoi(string s) {
        int number = 0, i = 0;
        int sign = 1,digit;
        long int result = 0;
        while (i < s.length() && s[i] == ' ')
            {i++;}
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }
        if (s[i] == '+' || s[i] == '-') {
            return 0;
        }
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
        digit = s[i]- '0';
        if(sign == -1 && result > (INT_MAX-digit)/10){return INT_MIN;}
        if(result > (INT_MAX-digit)/10){return INT_MAX;}
            
            result = result * 10;
            result += digit;
            i++;
        }

        return result * sign;
    }
};