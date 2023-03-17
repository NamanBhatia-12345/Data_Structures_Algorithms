#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n,m;
    cin >> n >> m;
    ll x,y,z,ans;
    x=((n-m)/(m+1));
    y=(m+1);
    z=((n-m)%(m+1));
    ans=((((x+1)*(x+2))/2)*(z)) + ((y-z)*((x)*(x+1)/2));
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