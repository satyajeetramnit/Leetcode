class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int check;
        if (ruleKey == "type")
        {
            check = 0;
        }
        else if (ruleKey == "color")
        {
            check = 1;
        }
        else if (ruleKey == "name")
        {
            check = 2;
        }

        int count = 0;
        for (int i = 0; i < items.size(); i++)
        {
            if (items[i][check] == ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};