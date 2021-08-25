class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {
        int n = s.size();
        int freq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        int temp;
        for (int i = 0; i < n; i++)
        {
            if (freq[s[i] - 'a'] != 0)
            {
                temp = freq[s[i] - 'a'];
                break;
            }
        }
        cout << temp << endl;
        for (int i = 0; i < n; i++)
        {
            if (freq[s[i] - 'a'] != 0)
            {
                if (freq[s[i] - 'a'] != temp)
                {
                    return false;
                }
            }
        }
        return true;
    }
};