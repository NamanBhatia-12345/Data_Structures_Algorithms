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
    int cnt = 0;
    sort(begin(a),end(a));
    sort(begin(b),end(b));
    for(int i : b)
      ans += (i * 1LL);
    if((n - m) > 0){
        for(int i=n-1;i>=0;i--){
            cnt++;
            ans += (a[i] * 1LL);
            if(cnt == (n - m))  break;
        }
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