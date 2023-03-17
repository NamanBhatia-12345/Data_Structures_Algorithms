#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n,s;
    cin >> n >> s;
    if(s==0){
        cout << "0\n";
        return;
    }
    ll count = s / (n*n);
    if(count > (n+1)){
        cout << (n+1) << "\n";
        return;
    }
    cout << count << "\n";
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