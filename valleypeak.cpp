for (int i = 1; i < n; i++)
{

    // traversing through array from (i+1)th
    // position
    int sub = price[i] - price[i - 1];
    if (sub > 0)
        profit += sub;
}
