#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll x1,x2;
    x1 = (n % 998244353);
    if(x1 < 0)
        x1 +=  998244353;
    cout << x1 << "\n";
}
int main()
{
ios;
int t = 1;
//cin >> t;
while(t--){
solve();
}
return 0;
}