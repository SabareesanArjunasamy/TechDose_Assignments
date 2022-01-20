#include <iostream>
#include <algorithm>
using namespace std;
void nCr(int n, int r)
{
    long long p = 1, k = 1;
    if ((n - r) < r)
    {
        r = n - r;
    }
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            long long gcdval = __gcd(p, k);
            p /= gcdval;
            k /= gcdval;
            n--;
            r--;
        }
    }
    cout << p / k;
}
int main()
{
    int n, r;
    cin >> n >> r;
    nCr(n, r);
}