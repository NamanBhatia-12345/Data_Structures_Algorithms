#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    map<ll,ll> mp;
    for(ll i=1;i<=n;i++){
        mp[i] = 0;
    }
    cout << "2\n";
    for(ll i=0;i<18;i++){
        ll x = pow(2,i);
        if(x <= n){
            cout << x << " ";
            mp[x]++;
        }
        else
          break;
    }
    vector<ll> arr1;
    vector<ll> arr2;
    for(ll i=1; i<=n; i++){
        if((mp[i] == 0) && (mp[i] % 2 != 0))
          arr1.push_back(i);
        if((mp[i] == 0) && (mp[i] % 2 == 0))
          arr2.push_back(i);  
    }
    for(ll i=0; i < arr2.size(); i++)
      cout << arr1[i] << " " << arr2[i] << " ";
    for(ll i=arr2.size(); i < arr1.size(); i++)
      cout << arr1[i] << " "; 
    cout << "\n";   
}
int main()
{
ios;
int t;
cin >> t;
while(t--)
solve();
return 0;
}
