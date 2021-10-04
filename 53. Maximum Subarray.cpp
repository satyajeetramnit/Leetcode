class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxSum=INT_MIN;
        int currentSum=0;
        for(int i=0;i<n;i++){
            currentSum+=nums[i];
            if(currentSum<0){
                currentSum=0;
            }
            maxSum=max(currentSum,maxSum);
        }
        if(maxSum==0){
		    sort(nums.begin(),nums.end());
		    maxSum=nums[n-1];
	    }
        
        return maxSum;
    }
};