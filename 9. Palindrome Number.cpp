class Solution {
public:
    bool isPalindrome(int x) {
        int y=0,z=x;
        long int num=0;
        while(x>0){
            y=x%10;
            num=num*10+y;
            x=x/10;
        }
        if(num==z)
            return true;
        else
            return false;
    }
};