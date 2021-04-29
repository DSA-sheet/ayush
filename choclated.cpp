long long findMinDiff(vector<long long> a, long long n, long long m)
{

    std::sort(a.begin(), a.end());
    long long int minm = INT_MAX;
    for (int i = 0; i <= n - m; i++)
    {
        if (a[i + m - 1] - a[i] < minm)
            minm = a[i + m - 1] - a[i];
    }
    return minm;
    //code
}