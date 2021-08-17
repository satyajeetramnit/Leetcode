class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> boolArr(candies.size());
        int maxN = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++)
        {
            if ((candies[i] + extraCandies) >= maxN)
            {
                boolArr[i] = true;
            }
            else
            {
                boolArr[i] = false;
            }
        }
        return boolArr;
    }
};