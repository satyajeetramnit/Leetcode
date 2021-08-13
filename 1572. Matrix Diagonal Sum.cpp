class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int sum = 0;
        int m = 0;
        if (n % 2)
        {
            m += mat[n / 2][n / 2];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    sum += mat[i][j];
                }
            }
            sum += mat[i][n - i - 1];
        }
        return (sum - m);
    }
};