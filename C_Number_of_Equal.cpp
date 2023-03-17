#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
      cin >> a[i];
    for(int i=0;i<m;i++)
      cin >> b[i];
    ll ans = 0;
    unordered_map<int,int> mp1,mp2;
    for(int i=0;i<n;i++)
      mp1[a[i]]++;
    for(int i=0;i<m;i++)
      mp2[b[i]]++;    
    for(auto it : mp1){
        int x = it.first;
        if(mp2.find(x) != mp2.end()){
            ll x1 = mp1[x];
            ll x2 = mp2[x];
            ans += (x1 * x2);
        }
    }    
    cout << ans << "\n";
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}