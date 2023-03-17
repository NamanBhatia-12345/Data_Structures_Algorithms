#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b){
    return (a.second < b.second);
}
void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> arr1(n),arr2(n);
    for(ll i=0;i<n;i++)
      cin >> arr1[i];
    for(ll i=0;i<n;i++)
      cin >> arr2[i];
    set<ll> x;
    for(ll i=0;i<n;i++)
       x.insert(arr1[i]);
    ll val = (x.size() * 1LL);   
    if(val < k){
        cout << "-1\n";
        return;
    }       
    ll sum = 0;
    map<ll , ll> mp;
    for(ll i=0;i<n;i++){
        if(mp.find(arr1[i]) != mp.end())
          mp[arr1[i]] = min(arr2[i], mp[arr1[i]]);
        else
          mp[arr1[i]] = arr2[i];  
    }
    vector<pair<ll,ll>> mpp;
    for(auto itr : mp)
        mpp.push_back({itr.first,itr.second});
    sort(mpp.begin(),mpp.end(),sortbysec);
    for(ll i=0;i<k;i++){
        sum += mpp[i].second;
    }  
    cout << sum << "\n";

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