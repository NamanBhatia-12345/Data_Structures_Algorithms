#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x1 = (k*l) / nl;
    int x2 = c*d;
    int x3 = (p / np);
    int ans = min(x1,min(x2,x3));
    ans = ans / n;
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}