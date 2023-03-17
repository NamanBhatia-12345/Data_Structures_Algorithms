#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,b;
    cin >> a >> b;
    int ans = 1;
    for(int i=0;i<b;i++)
      ans *= a;
    cout << ans << "\n";  
}
int main()
{
ios;
int t = 1;
//cin >> t;
while(t--){
solve();
}
return 0;
}