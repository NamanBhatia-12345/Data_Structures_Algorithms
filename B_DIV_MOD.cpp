#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll l,r,a;
    cin >> l >> r >> a;
    ll x , ans;
    if(r/a == l/a){
        ans = r/a + r%a;
    }
    else{
        ll ans1,ans2;
        ans1 = ((r/a) + (r%a));
        ans2 = ((r/a) - 1 + (a-1));
        ans = max(ans1,ans2); 
    }
    cout << ans << "\n";
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