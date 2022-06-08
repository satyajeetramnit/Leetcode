class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int N = nums.size();
        int resMax = 0, mask = 0;
        set<int> s;
        for(int i = 31; i >= 0; --i){
            mask = mask | (1 << i);
            for(int j = 0; j < N; ++j)
                s.insert(mask & nums[j]);
            
            int candidate = resMax | (1 << i);
            for(auto prefix : s){
                if(s.count(prefix ^ candidate)){
                    resMax = candidate;
                    break;
                }
            }
            s.clear();
        }
        return resMax;
    }
};