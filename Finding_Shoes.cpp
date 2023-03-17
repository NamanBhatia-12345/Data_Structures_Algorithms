#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,m;
    cin >> n >> m;
    int x = n*2;
    if(m == 0){
        cout << x << "\n";
    }
    else if(n <= m){
        cout << n << "\n";
    } 
    else{
        cout << (x-m) << "\n";
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