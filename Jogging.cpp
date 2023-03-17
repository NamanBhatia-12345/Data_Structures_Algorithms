#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define mod 1000000007
long long binpow(long long a, long long b) {
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
void solve(){
    int n,x;
    cin >> n >> x;
    ll ans, val1;
    if(n == 1){
        cout << x % mod << "\n";
        return;
    }
    else if(n == 2){
        cout << (x + x) % mod << "\n";
        return;
    }
    else{
        ans = binpow(2,n-2);
        ans--;
        ans = (ans * 2 * x) % mod;
        val1 = (2*x + ans) % mod;
        cout << val1 << "\n";
    }
}
int main()
{
ios;
int t;
cin >> t;
while(t--){
solve();
}
return 0;
}