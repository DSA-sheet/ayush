// all the rows as well as the columns are sorted

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int x = 0;
    int y = matrix[0].size() - 1;

    while (x < matrix.size() && y >= 0)
    {
        if (matrix[x][y] == target)
            return true;
        if (target < matrix[x][y])
            y--;
        else
            x++;
    }
    return false;
}