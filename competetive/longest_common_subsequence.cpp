
// nested looping, check validity at each step. compute first, second, third and fourth string at each step
// if the substring (first,second,third,fourth) is possible then procede for next loop

//do: https://www.geeksforgeeks.org/program-generate-possible-valid-ip-addresses-given-string/ study dynamic programming approach

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isvalid(string &str)
{
    if (str.length() > 3)
        return false;
    if (str[0] == '0' && str.length() > 1)
        return false;
    ll val = stoll(str);
    return val <= 255 && val >= 0;
}

void computeallip(string &str, vector<string> &res)
{
    for (ll i = 1; i <= 3 && i < str.length(); i++)
    {
        string first = str.substr(0, i);

        if (isvalid(first))
            ;
        {
            for (int j = 1; j <= 3 && i + j < str.length(); j++)
            {
                string second = str.substr(i, j);

                if (isvalid(second))
                {
                    for (int k = 1; k <= 3 && i + j + k < str.length(); k++)
                    {
                        string third = str.substr(i + j, k);
                        string fourth = str.substr(i + j + k);

                        if (isvalid(third) && isvalid(fourth))
                        {
                            res.emplace_back(first + "." + second + "." + third + "." + fourth);
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    //code
    string str;

    cin >> str;

    vector<string> res;

    computeallip(str, res);

    for (auto i : res)

        cout << i << "\n";

    return 0;
}