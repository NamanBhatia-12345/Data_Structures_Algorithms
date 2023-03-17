#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int ans = 1;
    while(true){
        if((ans % 2 == 0) and (ans % 3 == 0) and (ans % 4 == 0) and (ans % 5 == 0) and (ans % 6 == 0)
        and (ans % 7 == 0) and (ans % 8 == 0) and (ans % 9 == 0)){
            cout << ans << endl;
            break;
        }
        ans++;
    }
}
int main()
{
ios;
solve();
return 0;
}