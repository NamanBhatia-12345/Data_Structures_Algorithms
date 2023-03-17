#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll c,m,y,k;
    ll ans1=LONG_MAX,ans2=LONG_MAX,ans3=LONG_MAX,ans4=LONG_MAX;
    for(int i=0;i<3;i++){
      cin >> c >> m >> y >> k;
      ans1 = min(ans1,c);
      ans2 = min(ans2,m);
      ans3 = min(ans3,y);
      ans4 = min(ans4,k); 
    }
    if((ans1+ans2+ans3+ans4) >= 1000000){
        cout << ans1 << " " << ans2 << " " << ans3 << " " << ans4 << "\n";
    }
    else{
        cout << "IMPOSSIBLE\n";
    }
}
int main()
{
ios;
int t;
cin >> t;
for(int i=1;i<=t;i++){
 cout << "Case #" << i << ": ";
 solve();
}
return 0;
}