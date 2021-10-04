class Solution {
public:
    int balancedStringSplit(string s) {
        int countL=0,countR=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                countR++;
            }
            else if(s[i]=='L'){
                countL++;
            }
            if(countL==countR){
                ans++;
            }
        }
        return ans;
    }
};