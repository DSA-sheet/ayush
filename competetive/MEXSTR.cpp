#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max = 1000;

int num0[max];
int num1[max];
int dp0[max + 2];
int dp1[max + 2];

void helper()
{
    string s;
    cin >> s;

    int n = s.length();

    int pos = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            for (int j = pos; j <= i; j++)
            {
                num0[j] = 1
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
    }

    return 0;
}