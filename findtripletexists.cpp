bool find3Numbers(int A[], int n, int X)
{
    //Your Code Here
    sort(A, A + n);

    int left, right;
    for (int i = 0; i < n; i++)
    {
        left = i + 1;
        right = n - 1;

        while (left < right)
        {
            if (A[left] + A[right] == X - A[i])
                return 1;
            else if (A[left] + A[right] < X - A[i])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return 0;
}