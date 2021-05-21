int countRev(string s)
{
    // your code here
    if (s.size() % 2 != 0)
        return -1;
    int left = 0, right = 0;

    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{')
        {
            st.push(s[i]);
            left++;
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
                left--;
            }
            else
                right++;
        }
    }

    if (left % 2 == 0)
        left = left / 2;
    else
        left = left / 2 + 1;
    if (right % 2 == 0)
        right = right / 2;
    else
        right = right / 2 + 1;

    return left + right;
}