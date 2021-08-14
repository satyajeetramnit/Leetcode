class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        // int count=0,i=0;
        // while(count!=k){
        //     if(s[i]==' '){
        //         count++;
        //     }
        //     i++;
        // }
        // if(count==k){
        //     return s.substr(0,i-1);
        // }
        // return s;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == ' ')
            {
                k--;
                if (k == 0)
                {
                    return s.substr(0, i);
                }
            }
        }
        return s;
    }
};