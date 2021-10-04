class Solution
{
public:
    int sumBase(int n, int k)
    {
        int digit, sum = 0;
        while (n > 0)
        {
            digit = n % k;
            sum += digit;
            n /= k;
        }
        return sum;
    }
};