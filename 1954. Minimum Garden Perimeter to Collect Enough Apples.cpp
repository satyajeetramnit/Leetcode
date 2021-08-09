class Solution
{
public:

    inline long long val(lli k)
    {
        return (2 * k * (k + 1) * (2 * k + 1));
    }

    long long minimumPerimeter(long long neededApples)
    {
        long long low = 1;                         // lo^3 ~ neededApples/2
        long long high = ceil(cbrt(neededApples)); // hi^3 >= neededApples

        long long mid;
        long long ans = 0; // ans is k floor(n/2);

        while (low <= high)
        {

            mid = (low + high) / 2;

            if (val(mid) >= neededApples && val(mid - 1) < neededApples)
            {
                ans = mid;
                low = high = mid;
                break;
            }

            else if (val(mid) >= neededApples)
            {
                high = mid - 1;
            }

            else if (val(mid) < neededApples)
            {
                low = mid + 1;
            }
        }

        long long n = 2*ans;

        return 4 * n;
    }
};