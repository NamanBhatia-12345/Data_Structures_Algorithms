#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    const int m = 1000000000;
    ll ans = 3;
    vector<ll> mp;
    for(int i=0;i<n;i++){
        if(ans <= m){
          mp.push_back(ans);
         ans = ans*3;
        }
        else{
              cout << "NO\n";
              return;
          } 
    }
    cout << "YES\n";
    for(int x:mp)
      cout << x << " ";
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