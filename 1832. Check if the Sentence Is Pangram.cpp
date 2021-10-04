class Solution {
public:
    bool checkIfPangram(string sentence) {
        int alpha[26]={};
        for(int i=0;i<sentence.length();i++){
            alpha[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(alpha[i]==0){
                return false;
            }
        }
        return true;
    }
};