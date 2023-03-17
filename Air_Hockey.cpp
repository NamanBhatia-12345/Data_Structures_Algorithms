#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,b;
    cin >> a >> b;
    if(a == 0 && b == 0){
        cout << "7\n";
        return;
    }
    int x = 7-a;
    int y = 7-b;
    cout << min(x,y) << "\n";
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