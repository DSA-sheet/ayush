class Solution
{
public:
    vector<string> res;

    void swap(char *x, char *y)
    {
        char temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }

    void permutation(int l, int r, char *a)
    {
        int i = 1;

        if (l == r)
            res.push_back(a);
        else
        {
            for (int i = l; i <= r; i++)
            {
                swap((a + l), (a + i));
                permutation(l + 1, r, a);
                swap((a + l), (a + i));
            }
        }
    }
    vector<string> find_permutation(string S)
    {
        // Code here there

        int l = 0, r = S.size() - 1;

        char str[S.size()];

        strcpy(str, S.c_str());

        permutation(l, r, str);

        return res;
    }
};
