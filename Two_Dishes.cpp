#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int s1 = min(a,b);
    b = b - s1;
    if(b > 0)
      s1 += min(b,c);
    if(s1 >= n){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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