class Solution {
public:
    int myAtoi(string s) {
        long result = 0;
        int sign = 1, i = s.find_first_not_of(' ');
        if(i==-1) return 0;
        if(s[i] == '-' || s[i] == '+')
            sign = (s[i++] == '-') ? -1 : 1;
        while('0'<= s[i] && s[i] <= '9') {
            result = result*10 + (s[i++]-'0');
            if(result*sign >= INT_MAX) return INT_MAX;
            if(result*sign <= INT_MIN) return INT_MIN;                
        }
        return result*sign;
    }
};
