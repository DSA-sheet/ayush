// if sum of 2 sides is greater than the third side , the ntriangle is formed

// Sorting helps to cut down unnecessary checks

bool possibleToMakeTriangle(vector<int> &arr)
{

    //   Sort the array in non-decreasing order.
    sort(arr.begin(), arr.end());

    int n = arr.size();

    //  Iterate the array/list.
    for (int i = 0; i < n - 2; i++)
    {

        //  Return true if sum of first 2 elements is greater than the 3rd element.
        if (arr[i] + arr[i + 1] > arr[i + 2])
        {
            return true;
        }
    }

    //  If no non-degenerate triangle can be formed return false.
    return false;
}
