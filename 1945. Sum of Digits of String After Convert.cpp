class Solution
{
public:
    int getLucky(string s, int k)
    {
        //         int n=s.length();
        //         int arr[n];
        //         memset(arr, 0, sizeof(arr));
        //         for(int i=0;i<s.length();i++){
        //             arr[i]=(s[i]-'a')+1;
        //         }
        //         int ans=0;
        //         int sum=0;
        //         while(k--){
        //             for(int i=0;i<n;i++){
        //                 int tempSum = 0;
        //                 while (arr[i] != 0) {
        //                     tempSum = tempSum + arr[i] % 10;
        //                     arr[i] = arr[i] / 10;
        //                 }
        //                 sum+=tempSum;
        //             }

        //             ans=sum;
        //             if(k==0){
        //                 // cout<<ans<<endl;
        //                 return ans;
        //             }

        //             else{
        //                 int count = 0;
        //                 int x = sum;
        //                 while(sum > 0){
        //                     sum /= 10;
        //                     ++count;
        //                 }
        //                 n=count;
        //                 while(x > 0){
        //                     arr[--count] = x % 10;
        //                     x /= 10;
        //                 }
        //             }
        //         }
        //     // cout<<ans<<endl;
        //     return ans;

        string temp;
        for (int i = 0; i < s.length(); i++)
        {
            temp += to_string(s[i] - 'a' + 1);
        }

        int n = 0;
        for (int i = 0; i < temp.length(); i++)
        {
            n += temp[i] - '0';
        }

        for (int i = 1; i < k; ++i)
        {
            int next = 0;
            while (n)
            {
                int d = n % 10;
                next += d;
                n /= 10;
            }
            swap(next, n);
        }
        return n;
    }
};