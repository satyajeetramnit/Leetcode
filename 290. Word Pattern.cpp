class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2; 
        int i=0 , j=0;
        while(i<pattern.size()&&j<s.size()){
            string temp="";
            while(j<s.size()&&s[j]!=' '){
                temp+=s[j];
                j++;
            }
            j++;
            if(mp1.find(pattern[i])!=mp1.end()){
                if(mp1[pattern[i]]!=temp)
                    return false;
            }
            else
                mp1[pattern[i]]=temp;
            
            if(mp2.find(temp)!=mp2.end()){
                if(mp2[temp]!=pattern[i])
                    return false;
            }
            else
                mp2[temp]=pattern[i];
            i++;
        }
        if(i<pattern.size()||j<s.size())
            return false;
    
        return true;
    }
};