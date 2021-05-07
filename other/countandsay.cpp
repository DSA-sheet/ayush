#include <bits/stdc++.h>
using namespace std;
int main()
{
    string result = "1";
    int n = 4;
    while (n > 1)
    {
        string current = "";

        int i = 0;
        while (i < result.size())
        {
            int c = 1;
            while (i + 1 < result.size() && result[i] == result[i + 1])
            {
                c++;
                i++;
            }

            current += to_string(c) + result[i];
            i++;
        }
        result = current;
        n--;
    }

    cout << result;

    return 0;
}
