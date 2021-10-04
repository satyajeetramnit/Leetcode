class Solution {
public:
    // void swap(int a,int b){
    //     int temp=a;
    //     a=b;
    //     b=temp;
    // }
    
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        while(i<n-1){
            int avg=(nums[i-1]+nums[i+1]);
            if(avg%2==0 && nums[i]==avg/2){
                int temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
                // swap(nums[i],nums[i+1]);
                if(i>1){
                    i--;
                }
            }
            else{
                i++;
            }
        }
        return nums;
    }
};