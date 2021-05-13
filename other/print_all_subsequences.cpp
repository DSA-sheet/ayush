#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> get_array()
{
    int a;
    vector<int> arr;
    while (std::cin >> a)
        arr.push_back(a);
}

int main()
{
    //code

    vector<int> arr = get_array();

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
