// naive approach is to generate all substrings adn check and maintain a minimum variable.

// efficient method is to use sliding windows for checking

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string findSubString(string str)
{
    // Your code goes here

    map<char, int> hash;

    set<int> s;
    for (int i = 0; i < str.size(); i++)
        s.insert(str[i]);

    int d_count = s.size();

    int i = 0, j = 1;

    hash[str[i]]++;
    int c = 0;
    c++;

    int res = INT_MAX;

    while (i <= j and j < str.size())
    {

        if (c < d_count)
        {
            if (hash[str[j]] == 0)
                c++;
            hash[str[j]]++;
            j++;
        }
        else if (c == d_count)
        {
            res = min(res, j - i);

            if (hash[str[i]] == 1)
                c--;
            hash[str[i]]--;
            i++;
        }
    }

    while (c == d_count)
    {
        res = min(res, j - i);

        if (hash[str[i]] == 1)
            c--;
        hash[str[i]]--;
        i++;
    }

    return res;
}
int main()
{
    //code
    return 0;
}