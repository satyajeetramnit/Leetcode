class WordDictionary {
public:
    vector<string> v;
    map<int, int> M;   
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        v.push_back(word);
        if (M.find(word.length()) == M.end()) {
            M[word.length()] = 1;
        }
    }
    
    bool search(string word) {
        bool check = true;
        bool check2 = false;
		
        if(M.find(word.length())!=M.end()){ 
            for(int i=0; i<word.length(); i++){
                if(word[i]=='.'){
                    check2=true;
                }
            }
            if(check2){
                for(int i=0; i<v.size(); i++){
                    string w = v[i];
                    check = true;
                    if(w.length()==word.length()){
                        for(int j=0; j<word.length(); j++){
                            if(word[j]=='.'){ 
                                continue;
                            }else if(w[j]!=word[j]){
                                check=false;
                                break;
                            }
                        }
                        if(check){
                            return true;
                        }
                    }
                }
            }
            else{
                for(int i=0; i<v.size(); i++){
                    if(v[i]==word){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */