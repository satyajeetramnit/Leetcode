class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        int n = nums.size();
        vector<int> target;
        for (int i = 0; i < n; i++)
        {
            // target.insert (index[i], nums[i]);
            target.insert(begin(target) + index[i], nums[i]);
        }
        return target;
    }
};