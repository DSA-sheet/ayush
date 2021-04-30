// only rows are sorted but every first value of a row is greater than previous row's last value
// performing an imaginary binary search will give log(M*N)

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int low = 0;
    int high = matrix.size() * matrix[0].size() - 1;
    int m = matrix[0].size();
    while (low <= high)
    {
        int mid = (low + (high - low) / 2);
        if (matrix[mid / m][mid % m] == target)
            return true;
        if (matrix[mid / m][mid % m] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}