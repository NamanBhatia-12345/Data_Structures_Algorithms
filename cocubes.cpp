#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int m,n;
    cin >> m >> n;
    int ans = 0;
    for(int i=m;i<=n;i++){
        if(i % 3 == 0 and i % 5 == 0)
          ans += i;
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