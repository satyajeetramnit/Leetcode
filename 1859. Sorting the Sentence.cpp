class Solution {
public:
    string sortSentence(string s) {
        string ans="";
        vector<pair<int,string> >sent;
        stringstream words(s);
        string word;
        while(words>>word)
        {
            int len=word.size();
            int i=word[len-1]-'0';
            word.erase(word.begin()+(len-1));
            sent.push_back(make_pair(i,word));
        }
        sort(sent.begin(),sent.end());
        for(int i=0;i<sent.size();i++)
        {
            ans+=sent[i].second;
            ans+=" ";
        }
        ans.erase(ans.begin()+(ans.size()-1));
        return ans;
    }
};