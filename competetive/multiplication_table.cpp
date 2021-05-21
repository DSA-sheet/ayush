#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    //code
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll target;
        cin >> target;
        ll count = 0;

        for (ll i = 1; i <= n; i++)
        {
            if (target % i == 0)
            {
                ll a = target / i;
                if (a <= n)
                    count++;
            }
        }
        cout << count;
    }

    return 0;
}