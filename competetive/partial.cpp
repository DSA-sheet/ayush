#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000
bool is_existing(string fronte, string str)
{
    for (int i = 0, j = 0; i < str.size(); i++)
    {
        if (str[i] == fronte[j])
        {
            j++;
        }
        if (j == fronte.size())
        {
            return true;
        }
    }
    return false;
}
string fx(string str)
{
    queue<string> q;
    q.push("1");
    while (1)
    {
        string fronte = q.front();
        q.pop();
        if (!is_existing(fronte, str))
        {
            return fronte;
        }
        string fronth = fronte;
        fronte += "0";
        fronth += "1";
        q.push(fronte);
        q.push(fronth);
    }
    return "0";
}
string solve()
{
    string str;
    cin >> str;
    int c = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
            c++;
    }
    if (c == 0)
        return 0;
    return fx(str);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        cout << solve() << endl;
    }
    return 0;
}