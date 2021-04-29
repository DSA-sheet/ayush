int trappingWater(int arr[], int n)
{
    // Code here4

    int res = 0;
    int l = 0, r = n - 1, maxl = 0, maxr = 0;

    while (l <= r)
    {
        if (arr[l] <= arr[r])
        {
            if (arr[l] >= maxl)
                maxl = arr[l];
            else
                res += maxl - arr[l];
            l++;
        }
        else
        {
            if (arr[r] >= maxr)
                maxr = arr[r];
            else
                res += maxr - arr[r];
            r--;
        }
    }
    return res;
}