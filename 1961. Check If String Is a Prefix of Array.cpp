class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            ans+=words[i];
            if(s==ans){
                return true;
            }
        }
        return false;
    }
};