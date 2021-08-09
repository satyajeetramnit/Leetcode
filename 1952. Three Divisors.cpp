class Solution
{
public:
    bool isThree(int n)
    {
        // int count=0;
        // for(int i=0;i<=n;i++){
        //     if(n%i==0){
        //         count++;
        //     }
        //     if(count==3){
        //         return true;
        //     }
        // }
        // return false;

        if (n == 1 || n == 2 || n == 3)
        {
            return false;
        }
        int count = 2;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (n / i == i)
                {
                    count++;
                }
                else
                {
                    count += 2;
                }
            }
        }
        if (count == 3)
            return true;

        return false;
    }
};