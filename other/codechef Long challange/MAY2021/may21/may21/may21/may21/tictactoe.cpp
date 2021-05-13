#include <bits/stdc++.h>
using namespace std;

int checkwin[8][3] = {{0, 1, 2},
                      {3, 4, 5},
                      {6, 7, 8},
                      {0, 3, 6},
                      {1, 4, 7},
                      {2, 5, 8},
                      {0, 4, 8},
                      {2, 4, 6}};

bool owins(vector<char> mat)
{
    for (int i = 0; i < 8; i++)
    {
        if (mat[checkwin[i][0]] == 'O' && mat[checkwin[i][1]] == 'O' && mat[checkwin[i][2]] == 'O')
            return true;
    }
    return false;
}

bool xwins(vector<char> mat)
{
    for (int i = 0; i < 8; i++)
    {
        if (mat[checkwin[i][0]] == 'X' && mat[checkwin[i][1]] == 'X' && mat[checkwin[i][2]] == 'X')
            return true;
    }
    return false;
}

bool check_reachable(vector<char> mat)
{

    int cnt_x = 0, cnt_o = 0;
    for (int i = 0; i < 9; i++)
    {
        if (mat[i] == 'X')
            cnt_x++;
        else if (mat[i] == 'O')
            cnt_o++;
    }

    if (cnt_x == cnt_o || cnt_o == cnt_x - 1)
    {
        if (owins(mat))
        {
            if (xwins(mat))
                return false;
            else
            {
                if (cnt_x == cnt_o)
                    return true;
                else
                    return false;
            }
        }

        if (xwins(mat))
        {
            if (cnt_x == cnt_o + 1)
                return true;
            else
                return false;
        }

        return true;
    }
    return false;
}
int main()
{
    //code
    int t = 1;
    //cin >> t;

    while (t--)
    {

        vector<char> mat = {'X', 'X', 'X', 'O', '_', 'O', '_', '_', 'X'};
        /* for (int i = 0; i < 3; i++)
        {
            string str;
            cin >> str;
            mat.push_back(str[0]);
            mat.push_back(str[1]);
            mat.push_back(str[2]);
        }*/

        int res;

        if (check_reachable(mat))
        {
            bool flag = false;
            if (!xwins(mat) && !owins(mat))
            {
                for (int i = 0; i < 9; i++)
                {

                    if (mat[i] == '_')
                    {
                        flag = true;
                        break;
                    }
                }
            }

            if (flag)
                res = 2;
            else
                res = 1;
        }
        else
        {
            res = 3;
        }

        cout << res << endl;
    }
    return 0;
}