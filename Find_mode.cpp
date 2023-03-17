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
    map<ll,ll> mp;
    for(ll i : arr)
      mp[i]++;
    ll mx = LLONG_MIN;
    for(auto itr : mp)
        mx = max(mx , itr.second);
    vector<ll> ans;
    for(auto itr : mp){
        if(mx == itr.second)
         ans.push_back(itr.first);
    }
    sort(begin(ans), end(ans), greater<ll>());
    for(ll i : ans)
      cout << i << " ";
    cout << "\n";  
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