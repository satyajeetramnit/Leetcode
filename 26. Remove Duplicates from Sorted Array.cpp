class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // vector<int>::iterator it;
        // it = unique(nums.begin(), nums.end());
        // nums.resize(distance(nums.begin(), it));
        // return nums.size();
        
        // vector<int>::iterator it;
        // if(nums.size()==0) return 0;
        // int count=1;
        // int len=nums.size();
        // for(int i=1;i<len;){
        //     if(nums[i]!=nums[i-1]){
        //         count++;
        //         i++;
        //     }
        //     else{
        //         it=nums.begin()+i;
        //         nums.erase(it);
        //         len-=1;
        //     }
        // }
        // return count;
        
        if(nums.size()==0 || nums.size()==1) return nums.size();
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[count++]=nums[i+1];
            }
        }
        return count;
    }
};