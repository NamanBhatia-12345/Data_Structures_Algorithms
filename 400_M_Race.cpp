#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x,y,z;
    cin >> x >> y >> z;
    double d1 = (400 * 1.0 / x), d2 = (400 * 1.0/ y), d3 = (400 * 1.0/ z);
    if(d1 > d2 and d1 > d3)
      cout << "ALICE\n";
    else if(d2 > d1 and d2 > d3)
      cout << "BOB\n";
    else
      cout << "CHARLIE\n";    
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