int maxSubarraySum(int arr[], int n)
{

    // Your code here
    int meh = 0;
    int msf = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        meh += arr[i];
        if (meh < arr[i])
        {
            meh = arr[i];
        }

        //   meh = min(meh+arr[i],arr[i])

        if (meh > msf)
        {
            msf = meh;
        }
    }

    return msf;
}