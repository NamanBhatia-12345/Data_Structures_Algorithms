#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,b;
    cin >> a >> b;
    if(a == 0 && b == 0){
        cout << "https://www.codechef.com/practice\n";
    }
    else if(a == 0 && b == 1){
          cout << "https://www.codechef.com/practice\n";
    }
    else if(a == 1 && b == 0){
        cout << "https://www.codechef.com/contests\n";
    }
    else{
        cout << "https://discuss.codechef.com\n";
    }
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}