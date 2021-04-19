void rotate(int arr[], int n)
{
    int t = arr[n - 1];

    for (int i = 0; i < n; i++)
    {
        int temp = t;
        t = arr[i];
        arr[i] = temp;
    }
}