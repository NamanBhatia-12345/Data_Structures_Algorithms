#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n,x;
    cin >> n >> x;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
      cin >> arr[i];
    sort(arr.begin(),arr.end());  
    vector<ll> res;
    int cnt = 0;
    for(ll i=n-1;i>=0;i--){
        cnt += arr[i];
        res.push_back(cnt);
    }  
    // for(int i : res)
    //   cout << i << " ";
    // cout << "\n";  
    ll ans = 0;
    double d2 = x;
    for(int i=0;i<res.size();i++){
        double d1 = (double) res[i]/(i+1);
        if(d1 >= d2)
          ans++;
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