//

int kadaneAlgorithm(int arr[], int n)
{
    int sum = 0;
    int maxSum = INT_MIN;

    for (int currIndex = 0; currIndex < n; currIndex++)
    {
        sum += arr[currIndex];

        if (maxSum < sum)
        {
            maxSum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxSum;
}

int maxSumRectangle(vector<vector<int>> &arr, int n, int m)
{
    int maxSum = INT_MIN;

    int temp[n];

    for (int left = 0; left < m; left++)
    {
        for (int i = 0; i < n; i++)
        {
            temp[i] = 0;
        }

        for (int right = left; right < m; right++)
        {
            for (int i = 0; i < n; i++)
            {
                temp[i] += arr[i][right];
            }

            int sum = kadaneAlgorithm(temp, n);

            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }

    return maxSum;
}