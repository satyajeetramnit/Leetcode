class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxi="0";
        for (int i=0;i<number.length();i++){
            string curr=number;
            if(number[i]==digit){
                curr.erase(curr.begin()+i);
                maxi=max(maxi,curr);
            }
            // cout<<curr<<"\n";
        }
        return maxi;
    }
};