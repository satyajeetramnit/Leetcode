class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {

        int n = nums.size();
        int even = 0, odd = n - 1;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
            {
                ans[even] = nums[i];
                even++;
            }
            else
            {
                ans[odd] = nums[i];
                odd--;
            }
        }
        return ans;
    }
};