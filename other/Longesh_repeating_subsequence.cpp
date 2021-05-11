// use LCS and add one extra condition to it

// if(S[i]==S[j] && i!=j)  --> i!=j is added to avoid the same characters at the same indices

#include <bits/stdc++.h>

using namespace std;

int LongestRepeatingSubsequence(string X)
{
    // Code here
    int n = X.size();
    int dp[n + 1][n + 1];
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0; // for filling the zero size column of d table;

            else if (X[i - 1] == X[j - 1] && i != j)
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[n][n];
}

int main()
{
    string str = "AABB";

    cout << "Length of LCS is "
         << LongestRepeatingSubsequence(str);

    return 0;
}
