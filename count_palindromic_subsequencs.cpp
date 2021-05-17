

// a substring can be : c1....c2 then derive formula for differenct cases where we include and exclude the
// characters c1 and c2 .
// Do : learn about the MOD thing, make table to understand and look at the formula once again

long long int countPS(string str)
{
    //Your code here

    int n = str.size();
    long long int M = 1000000007;
    long long int dp[n][n];
    for (int g = 0; g < n; g++)
    {
        for (int i = 0, j = g; j < n; i++, j++)
        {
            if (g == 0)
                dp[i][j] = 1;
            else if (g == 1)
            {
                if (str[i] == str[j])
                    dp[i][j] = 3;
                else
                    dp[i][j] = 2;
            }
            else
            {
                if (str[i] == str[j])
                {
                    dp[i][j] = (dp[i][j - 1] + dp[i + 1][j] + 1) % M;
                }
                else
                {
                    long long int a = (dp[i][j - 1] + dp[i + 1][j]) % M;
                    long long int b = dp[i + 1][j - 1];

                    dp[i][j] = ((a - b) % M + M) % M;
                }
            }
        }
    }

    int res = dp[0][n - 1];

    return res;
}