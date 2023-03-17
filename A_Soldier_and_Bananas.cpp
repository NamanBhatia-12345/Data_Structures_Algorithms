#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll k,w,n;
    cin >> k >> w >> n;
    ll ans = k*(((1+n)*(n))/2);
    if(w>=ans){
        cout << "0\n";
        return;
    }
    cout << (ans-w) << "\n";
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}