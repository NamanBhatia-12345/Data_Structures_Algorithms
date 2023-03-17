#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x;
    cin >> x;
    int ans = x;
    if(x <= 100){
        cout << ans << "\n";
    }else if(x > 100 and x <= 1000){
        ans = x - 25;
        cout << ans << "\n";
    }else if(x > 1000 and x <= 5000){
        ans = x - 100;
        cout << ans << "\n";
    }else{
        ans = x - 500;
        cout << ans << "\n";
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