class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int n=num.length();
        for(int i=0;i<n-2;i++){
            // cout<<i<<"\n";
            // cout<<num[i]<<" "<<num[i+1]<<" "<<num[i+2]<<"\n";
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                if(ans=="" || num[i]>ans[0]){
                    // ans=num[i]+num[i+1]+num[i+2];
                    ans = num.substr(i,3);
                }
            }
            // cout<<ans<<"\n";
        }
        return ans;
    }
};