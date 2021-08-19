class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int temp = n;
        int sum = 0;
        int product = 1;
        while (temp != 0)
        {
            int digit = temp % 10;
            temp /= 10;
            sum += digit;
            product *= digit;
        }
        return (product - sum);
    }
};