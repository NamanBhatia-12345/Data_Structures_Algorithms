#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
      cin >> arr[i];
    ll ans,ans1,ans2;
    sort(arr.begin(),arr.end());
       ans1 = ((arr[n-1]*arr[n-2]) + (arr[n-1]-arr[n-2]));
       ans2 = ((arr[1]*arr[0]) + (arr[1]-arr[0]));
       ans = max(ans1,ans2);
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
