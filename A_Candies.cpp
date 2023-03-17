#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int k = 2;
    int ans = 0, y;
    while(true){
        y = 1 << k;
        y--;
        if(n % y == 0){
            ans = (n / y);
            break;
        }
        k++;
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