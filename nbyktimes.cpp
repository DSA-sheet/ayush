int countOccurence(int arr[], int n, int k)
{
    // Your code here
    int x = n / k;
    int res = 0;
    // unordered_map initialization
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Traversing the map
    for (auto i : freq)
    {

        // Checking if value of a key-value pair
        // is greater than x (where x=n/k)
        if (i.second > x)
        {

            // Print the key of whose value
            // is greater than x
            res++;
        }
    }
    return res;
}