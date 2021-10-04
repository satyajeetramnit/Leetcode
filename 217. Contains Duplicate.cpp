class Solution
{
public:
    bool containsDuplicate(vector &nums)
    {
        // //brute force o(n2) -> TC O(1)->SC
        // int n = nums.size();
        // if (nums.size() == 0 || nums.size() == 1)
        // {
        //     return false;
        // }
        // bool flag = false;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (nums[i] == nums[j])
        //         {
        //             flag = true;
        //             break;
        //         }
        //     }
        // }
        // return flag;

        // // USING MAP
        // // TC->O(N)
        // // SC->O(N)

        // int n = nums.size();
        // if (nums.size() == 0 || nums.size() == 1)
        // {
        //     return false;
        // }
        // unordered_map<int, int> mp;
        // for (int i = 0; i < n; i++)
        // {
        //     mp[nums[i]]++;
        // }
        // bool flag = false;
        // for (auto i : mp)
        // {
        //     if (i.second > 1)
        //     {
        //         flag = true;
        //         break;
        //     }
        // }
        // return flag;

        
        
        
        // // 3rd approach similar to previous 
        
        // int n = nums.size();
        // if (nums.size() == 0 || nums.size() == 1)
        // {
        //     return false;
        // }
        // unordered_map<int, int> mp;
        // for (int i = 0; i < n; i++)
        // {
        //     if (mp.find(nums[i]) == mp.end())
        //     {
        //         mp[nums[i]] = i;
        //     }
        //     else
        //     {
        //         return true;
        //     }
        // }
        // return false;

        
        
        //4th approach
        //tc->o(nlogn) for sorting
        //sc->o(1)
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i])
                return true;
        }
        return false;
    }
};