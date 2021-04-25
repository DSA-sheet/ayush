void merge(int arr1[], int arr2[], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);

            int f = arr2[0];
            int j;
            for (j = 1; j < m && arr2[j] < f; j++)
            {
                arr2[j - 1] = arr2[j];
            }
            arr2[j - 1] = f;
        }
    }

    // code here
}