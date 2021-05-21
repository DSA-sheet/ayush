#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll binary_exponentiation(ll a, ll b)
{
    ll result = 1;

    while (b > 0)
    {
        if (b % 2 != 0)
            result *= a;
        a *= a;
        b /= 2;
    }

    return result;
}

int main()
{

    ll a = 10, b = 8;
    cout << binary_exponentiation(a, b);
    //code
    return 0;
}
