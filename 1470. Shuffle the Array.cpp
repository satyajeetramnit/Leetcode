class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;
        int countl = 0, countr = n;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
            {
                ans.push_back(nums[countl]);
                countl++;
            }
            else
            {
                ans.push_back(nums[countr]);
                countr++;
            }
        }
        return ans;
    }
};