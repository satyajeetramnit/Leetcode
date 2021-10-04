class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n,maxm;
        n=nums.size();
        maxm=0;
        
        if(n==1) 
            return 1;
        
        for(int i=0;i<n;i++){   
            if(maxm>=i) 
                maxm=max(maxm, i+nums[i]);
        }

        if(maxm>=(n-1))
            return true;
        else
            return false;
    }
};