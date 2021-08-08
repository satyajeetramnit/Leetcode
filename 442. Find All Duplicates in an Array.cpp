class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;

        //         int n=nums.size();
        //         for(int i=0;i<n;i++){
        //             nums[nums[i]%n]+=n;
        //         }

        //         for(int i=0;i<n;i++){
        //             if((nums[i]/n)>1){
        //                 ans.push_back(i);
        //             }
        //         }

        // return ans;

        // int n=arr.size();
        // vector <int> ans;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[i]==arr[j] && arr[j]!=-1){
        //             ans.push_back(arr[i]);
        //             arr[j]=-1;
        //         }
        //     }
        // }
        // // sort(ans.begin(),ans.end());
        // return ans;
    }
};