#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
     ll x,y,m;
     cin >> x >> y >> m;
     ll z = x*m;
     if(z < y)
       cout << "YES\n";
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