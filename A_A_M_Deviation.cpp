#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll a,b,c;
    cin >> a >> b >> c;
    if((a+c)==(2*b)){
        cout << "0\n";
        return;
    }
    else if((a+c-(2*b))%3==0)
      cout << "0\n";
    else
      cout << "1\n";  
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