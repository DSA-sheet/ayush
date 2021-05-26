

// we have to consider 2 scenerios where string character is 0 and 1
// then return the one which produces minimum output

int stringwith(string S, char ch)
{
    int count = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != ch)
            count++;

        ch = (ch == '1') ? '0' : '1'; // maintainin a variable which is the expected value.
    }

    return count;
}
int minFlips(string S)
{

    // your code here
    int res;
    res = min(stringwith(S, '0'), stringwith(S, '1'));
    return res;
}