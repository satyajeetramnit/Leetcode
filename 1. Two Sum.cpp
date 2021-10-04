class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return ans;
        
        int i, n = nums.size();
        unordered_map<int, int> mp;
        for(i=0;i<n;i++){
            if(mp.find(target-nums[i]) != mp.end()){
                return {mp[target-nums[i]], i};
            }
            else mp[nums[i]] = i;
        }
        return {};
    }
};