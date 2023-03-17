#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll ans;
    if(n <= 6){
        cout << "15\n";
        return;
    }
    if(n % 2 == 0)
      ans = (n / 2);
    else
      ans = (n / 2) + 1;  
    ans = ans * 5;  
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