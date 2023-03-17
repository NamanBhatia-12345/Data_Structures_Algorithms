#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x;
    cin >> x;
    int a = (x + (x / 2));
    int b = (x - (x / 2));
    if((a ^ b) == x){
        cout << a << " " << b << "\n";
    }
    else{
        cout << "-1\n";
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