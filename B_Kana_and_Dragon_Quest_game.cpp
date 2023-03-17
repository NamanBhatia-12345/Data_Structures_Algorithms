#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x,n,m;
    cin >> x >> n >> m;
    if(x <= 10 and m >= 1){
        cout << "YES\n";
        return;
    }
    while((n != 0) and (x != 0)){
        x = (x / 2) + 10;
        n--;
    }
    if(x == 0){
        cout << "YES\n";
    }else{
        x = x - (m * 10);
        if(x <= 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
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