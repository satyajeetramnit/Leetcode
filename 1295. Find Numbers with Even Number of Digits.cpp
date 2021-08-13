class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            int temp = 0;
            while (n)
            {
                temp++;
                n /= 10;
            }
            if (!(temp % 2))
            {
                count++;
            }
        }
        return count;
    }
};