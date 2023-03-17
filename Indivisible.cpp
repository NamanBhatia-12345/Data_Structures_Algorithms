#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int ans;
    for(int i=1;i<100;i++){
        if((a % i != 0) and (b % i != 0) and (c % i != 0)){
            ans = i;
            break;
        }
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