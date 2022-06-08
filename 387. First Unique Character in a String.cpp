class Solution {
public:
    int firstUniqChar(string s) {
        // int i,j;
        // for(int i=0;i<s.length();i++){
        //     for(int j=i+1;i<s.length();j++){
        //         if(s[i]==s[j]) break;
        //     }
        //     if(j==s.length()) break;
        // }
        // return i;
        
        map<char, int> count;
        for (char ch : s) count[ch]++;
        for (int i = 0; i < s.size(); i++) 
            if(count[s[i]] == 1) return i;
        return -1;
    }
};