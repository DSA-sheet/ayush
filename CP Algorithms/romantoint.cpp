
// if the next value is greater , then subtract the smaller one from greater and add the resultant to result.
// then jump one index, else directly add String[i] to the result variable

int romanToDecimal(string &str)
{
    // code here
    unordered_map<char, int> hash = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

    int res = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (hash[str[i]] < hash[str[i + 1]])
        {
            res += hash[str[i + 1]] - hash[str[i]];
            i++;
            continue;
        }
        res += hash[str[i]];
    }
    return res;
}