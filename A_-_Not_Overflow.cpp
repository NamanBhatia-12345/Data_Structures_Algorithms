#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll a,b;
    a=pow(2,31);
    b=-a;
    a=a-1;
    if(n>=b&&n<=a)
      cout << "Yes\n";
    else
      cout << "No\n";   
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