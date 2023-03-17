#include <bits/stdc++.h>
using namespace std;
int findNumberOfDigits(long n, int base)
{
    int dig = (int)(floor( log(n) / log(base)) + 1);
    return dig;
}
int main()
{
    long n;
    cin >> n;
    int base;
    cin >> base;
    long long ans = 0;
    for(long i=0;i<=n;i++)
    ans += findNumberOfDigits(n, base);
    cout << ans << "\n";
    return 0;
}