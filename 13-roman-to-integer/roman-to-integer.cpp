class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int val;
        int arr[s.size()];

        for (int i = 0; i < s.size(); i++) {
            switch (s[i]) {
                case 'I':
                    val = 1;
                    break;
                case 'V':
                    val = 5;
                    break;
                case 'X':
                    val = 10;
                    break;
                case 'L':
                    val = 50;
                    break;
                case 'C':
                    val = 100;
                    break;
                case 'D':
                    val = 500;
                    break;
                case 'M':
                    val = 1000;
                    break;
            }
            arr[i] = val;
        }
        for (int i = 0; i < s.size(); i++) {
            if (i != s.size() - 1) {
                if (arr[i] >= arr[i+1]) {
                    ans += arr[i];
                } else {
                    ans -= arr[i];
                }
            } else {
                ans += arr[i];
            }
        }
        return ans;
    }
};