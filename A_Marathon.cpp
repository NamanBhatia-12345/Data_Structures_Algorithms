#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if(a < b)
      ans++;
    if(a < c)
      ans++;
    if(a < d)
      ans++;
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