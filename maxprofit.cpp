int maxProfit(vector<int> &prices)
{

    int min = INT_MAX, maxp = 0;

    for (auto num : prices)
    {
        if (num < min)
            min = num;
        if (num - min > maxp)
            maxp = max(maxp, num - min);
    }

    return maxp;
}