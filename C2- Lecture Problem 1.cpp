#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){  
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++)
      cin >> arr[i];
    ll res=1;
	ll x,y;  
    for(ll i=0;i<n;i++){
       	y=__gcd(res,arr[i]);
       	x=((res)*(arr[i]));
       	res=(x/y);
	}  
    cout << res << "\n";
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
