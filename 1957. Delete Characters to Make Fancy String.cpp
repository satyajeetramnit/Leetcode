class Solution {
public:
    string makeFancyString(string s) {
        int count=0;
        char ch;
        for(int i=0;i<s.length();i++){
            if(ch!=s[i]){
                ch=s[i];
                count=1;
            }
            else if(ch==s[i] && count==2){
                s[i]='0';
            }
            else{
                count++;
            }
        }
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                ans+=s[i];
            }
        }
        return ans;
    }
};