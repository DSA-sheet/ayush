
// brute force method is maving some part a first string from front to back and comparing it with
// string 2 . takes ON^2

// Optimised approach is below , adding 1st string with itself
// and matching string 2 as a pattern to the combination string (by using KMP)

bool fun(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}
