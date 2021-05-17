#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    //code
    string str = "0100110101";

    int count1 = 0, count0 = 0, count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
            count1++;
        else
            count0++;

        if (count0 == count1)
            count++;
    }

    if (count0 != count1)
        cout << -1;
    else
        cout << count;

    return 0;
}