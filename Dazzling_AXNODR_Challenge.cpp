#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    if(n % 4 == 0){
        cout << 3+n << "\n";
    }
    else if(n % 4 == 1){
        cout << n << "\n";
    }
    else{
        cout << "3\n";
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