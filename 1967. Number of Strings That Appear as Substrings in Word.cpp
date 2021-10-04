class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
        int ans=0;
        for(auto s:patterns){
            int count=0;
            for(int i = 0;i<word.length();i++){
                if(count==s.length())
                    break;
                if(s[count]==word[i]){
                    count++;
                }
        
                else{
                    if(count > 0){
                        i -= count;
                    }
                    count = 0;
                }
            }
            if(count >= s.length()){
                ans++;
            }
        }
        
        return ans;
    }
};