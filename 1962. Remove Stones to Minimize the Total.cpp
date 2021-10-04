class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        // int i=0;
        // if(piles.size()==1){
        //     while(k--){
        //         piles[i]=floor(piles[i]/2);
        //     }
        // }
        // else{
            while(k!=0){
                sort(piles.begin(),piles.end(),greater<int>());
                int temp=piles[0]-floor(piles[0]/2);
                for(int i=0;i<piles.size();i++){
                    if(k==0){
                        break;
                    }
                    if(piles[i]>=temp){
                        piles[i]-=floor(piles[i]/2);
                        k--;
                    }
                    else{
                        break;
                    }   
                }
            }   
        // }
        int ans=0;
        for(int i=0;i<piles.size();i++){
            ans+=piles[i];
        }
        return ans;
    }
};