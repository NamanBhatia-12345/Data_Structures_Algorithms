#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll x,y;
    cin >> x >> y;
    ll ans;
    if(x >= y)
      cout << "0\n";
    else{
        if(y % x == 0)
          ans = (y/x) - 1;
        else
          ans = (y/x);
    cout << ans << "\n";        
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