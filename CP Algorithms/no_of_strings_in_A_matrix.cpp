#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(int i, int j, string s, char matrix[5][5], int size, int idx)
{

    int found = 0;

    if (i >= 0 && j >= 0 && i < 5 && j < 5 && matrix[i][j] == s[idx])

    {
        found = 1;
        char temp = s[idx];

        matrix[i][j] = 0;

        idx++;

        if (idx == size)
            found = 1;
        else
        {
            found += solve(i + 1, j, s, matrix, size, idx);
            found += solve(i - 1, j, s, matrix, size, idx);
            found += solve(i, j + 1, s, matrix, size, idx);
            found += solve(i, j - 1, s, matrix, size, idx);
        }
        matrix[i][j] = temp;
    }
    return found;
}
int main()
{
    //code
    string s = "TEST";

    char matrix[5][5] = {{'T', 'E', 'S', 'T', 'Y'},
                         {'T', 'E', 'S', 'T', 'Y'},
                         {'T', 'E', 'S', 'T', 'Y'},
                         {'T', 'E', 'S', 'T', 'Y'},
                         {'T', 'E', 'S', 'T', 'Y'}};

    int res = 0;
    int size = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            res += solve(i, j, s, matrix, size, 0);
        }
    }

    cout << res;
    return 0;
}