#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n,q;
    cin >> n >> q;
    vector<ll> arr(n);
    vector<ll> q1(q);
    for(ll i=0;i<n;i++)
      cin >> arr[i];
    for(ll i=0;i<q;i++)
      cin >> q1[i];
    sort(arr.begin(),arr.end());
    vector<ll> mp;
    ll sum = 0;
    for(ll i=n-1;i>=0;i--){
        sum += arr[i];
        mp.push_back(sum);
    }  
    vector<ll> res; 
    for(ll i=0;i<q;i++){
        ll l = 0,r = mp.size()-1; 
        ll x =q1[i];
        ll val=-1;
        while(l <= r){
            ll m =(l+r)/2;
            if(mp[m] >= x){
                val = m+1;
                r = m-1; 
            }
            else
                l = m+1;
        }
        res.push_back(val);
    }
    for(ll i=0;i<q;i++)
      cout << res[i] << "\n";
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