void nextPermutation(vector<int> &nums)
{

    if (nums.size() == 1)
        return;
    int i = nums.size() - 2;
    while (i >= 0 && nums[i] > nums[i + 1])
        i--;

    if (i >= 0)
    {
        int j = nums.size() - 1;
        while (nums[j] <= nums[i])
            j--;
        swap(nums[i], nums[j]);
    }
    int x = i + 1, y = nums.size() - 1;
    while (x < y)
        swap(nums[x], nums[y]);
}