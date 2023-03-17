#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    long b,c;
    cin >> b >> c;
    long ans=1;
    if(c%b==0)
      ans=(c/b);
    else{
        ans = (b*c)/(__gcd(b,c));
        ans = ans/b;
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