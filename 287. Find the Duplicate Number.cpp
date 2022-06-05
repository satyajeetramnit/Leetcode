class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // set<int> s(nums.begin(), nums.end() );
        // long long t1=0,t2=0,n=nums.size();
        // for(int i=0;i<n;i++) t1+=nums[i];
        // set<int>::iterator itr;
        // for (itr = s.begin(); itr != s.end();itr++) t2+=*itr;
        // return (t1-t2)/(nums.size()-s.size());
        
        
        // floys's method
        int slow = 0, fast = 0;
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (fast == slow) break;
        }
        int idx = 0;
        while (true) {
            slow = nums[slow];
            idx = nums[idx];
            if (slow == idx) return slow;
        }
        return -1;
    }
};