class Solution {
public:
    vector<vector<string>> ans;
    bool isPal(string str){
        int start = 0;
        int end = str.length() - 1;
        while(start < end){
            if(str[start] != str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void solve(string &input , vector<string> &output , int curr_index){
        if(curr_index == input.length()){
            int len = 0;
            for(auto str : output){
                len += str.length();
            }
            if(len == input.length()){
                ans.push_back(output);
            }
            return;
        }
        for(int index = curr_index ; index < input.length() ; ++index){
            string curr_str = input.substr(curr_index , index - curr_index + 1);
            if(isPal(curr_str)){
                output.push_back(curr_str);
                solve(input , output , index + 1);
                output.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        string input = s;
        vector<string> output = {};
        solve(input , output , 0);
        return ans;
    }
};