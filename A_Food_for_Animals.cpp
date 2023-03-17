#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    if(a >= x && b >= y)
      cout << "YES\n";
    else if(a >= x && (b+c) >= y)
      cout << "YES\n";
    else if((a+c) >= x && b >= y)
      cout << "YES\n";
    else if(a < x && b < y){
        x = x-a;
        y = y-b;
        if((x+y) <= c)
          cout << "YES\n";
        else
          cout << "NO\n";  
    }      
    else
      cout << "NO\n";
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