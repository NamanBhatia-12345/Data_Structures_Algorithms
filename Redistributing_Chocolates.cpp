#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x,y,z;
    cin >> x >> y >> z;
    int sum = (x + y + z) - 3;
    if(sum > 2){
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