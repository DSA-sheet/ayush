string isSubset(int a1[], int a2[], int n, int m)
{

    unordered_map<int, int> hash;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        hash[a1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        if (hash[a2[i]] != 0)
        {
            continue;
        }
        else
        {

            flag = false;
            break;
        }
    }

    if (flag)
        return "Yes";
    else
        return "No";
}