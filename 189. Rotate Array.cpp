class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int> dq;
        for(auto x:nums) dq.push_back(x);
        while(k--){
            int b=dq.back();
            dq.pop_back();
            dq.push_front(b);
        }
        nums.clear();
        for(auto it=dq.begin();it!=dq.end();it++) nums.push_back(*it);
    }
};