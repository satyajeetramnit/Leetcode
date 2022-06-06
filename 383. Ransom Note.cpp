class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool ret = true;
        unordered_map<char,int> m;
    
        for(char ch : magazine) 
            m[ch]++;
        for(char ch : ransomNote) 
            if(--m[ch] < 0){
                ret = false;
                break;
            }
        return ret;
    }
};