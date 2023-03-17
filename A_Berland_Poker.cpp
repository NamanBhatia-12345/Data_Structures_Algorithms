#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    int x = (n / k), mx = 0;
    if((m == 0) or (x >= m)){
        cout << m << "\n";
    }
    else{
        mx = x;
        m = m - x;
        x--;
        if(x != 0)  mx -= ((m / x) + (m % x));
        else mx = 0;
        cout << mx << "\n";
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