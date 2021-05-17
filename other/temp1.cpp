#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string helper(int i, int j)
{
    string res = "<";
    res += to_string(i);
    res += ",";
    res += to_string(j);
    res += ">";
    return res;
}
int main()
{
    //code
    int i = 1, j = 2;

    string res = helper(i, j);

    cout << res;
    return 0;
}