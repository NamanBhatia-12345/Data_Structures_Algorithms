#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x,y;
    cin >> x >> y;
    if(x > y){
        cout << "0 0\n";
        return;
    }
    else if(y % x != 0){
        cout << "0 0\n";
        return;
    }
    else{
        int a = 1;
        int b = (y / x);
        cout << a << " " << b << "\n";
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