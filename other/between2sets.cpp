// take LCM of 1st array and HCF of 2nd array
// find the multiples of LCM that divide the HCF

int getTotalX(vector<int> a, vector<int> b)
{
    int result = 0;

    // Get LCM of all elements of a
    int lcm = a[0];
    for (auto integer : a)
    {
        lcm = getLCM(lcm, integer);
    }

    // Get GCD of all elements of b
    int gcd = b[0];
    for (auto integer : b)
    {
        gcd = getGCD(gcd, integer);
    }

    // Count multiples of lcm that divide the gcd
    int multiple = 0;
    while (multiple <= gcd)
    {
        multiple += lcm;

        if (gcd % multiple == 0)
            result++;
    }

    return result;
}