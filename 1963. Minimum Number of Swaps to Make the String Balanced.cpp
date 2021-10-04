class Solution {
public:
    int minSwaps(string s) {
        int swap=0,count=0;
        for(char c:s) {
            if(c=='[') {
                count++;
            } 
            else {
                count--;
                if(count<0) {
                    count+=2;
                    swap++;
                }
            }
        }
        return swap;
    }
};