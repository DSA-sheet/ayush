long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
    long long maxSum = -1e15;
    long long curSum = 0;

    for (int i = 0; i < n * k; i++)
    {
        curSum += arr[i % n]; // Since the array is repeating k times, the total no. of elements is k*n
                              // and each element can be accessed by arr[i%n]
        maxSum = max(maxSum, curSum);

        if (curSum < 0)
        {
            curSum = 0;
        }
    }

    return maxSum;
}