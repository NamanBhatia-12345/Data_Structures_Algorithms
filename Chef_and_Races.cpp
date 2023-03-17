#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x[2],a[2];
    cin >> x[0] >> x[1] >> a[0] >> a[1];
    int ans = 0;
    if(x[0] != a[0] && x[0] != a[1] && x[1] != a[0] && x[1] != a[1])
      cout << "2\n";
    else if((x[0] == a[0] && x[1] == a[1]) || (x[0] == a[1] && x[1] == a[0]))
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