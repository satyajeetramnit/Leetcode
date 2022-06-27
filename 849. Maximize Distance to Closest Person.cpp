class Solution {
public:
     int maxDistToClosest(vector<int> seats) {
         int n=seats.size();
        int left=-1,ans=0;
         for(int i=0;i<n;i++){
             if(!seats[i] && left==-1){
                 ans++;
             }
             if(seats[i] && left==-1){
                 left=i;
                 continue;
             }
             if(seats[i]){
                 ans=max(ans,(i-left)/2);
                 left=i;
             }
         }
         ans=max(ans,n-left-1);
        return ans;
    }
};