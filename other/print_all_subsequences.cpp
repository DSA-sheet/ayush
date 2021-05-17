#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void printsubsequence(string str, string output)
{

    if (str.empty())
    {
        cout << output << endl;
        return;
    }

    printsubsequence(str.substr(1), output + str[0]);
    printsubsequence(str.substr(1), output);
}
int main()
{
    string input = "abc";
    string output = "";

    printsubsequence(input, output);

    //code
    return 0;
}
