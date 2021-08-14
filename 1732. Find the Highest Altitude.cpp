class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int hmax = 0;
        int temp = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            temp += gain[i];
            hmax = max(temp, hmax);
        }
        return hmax;
    }
};