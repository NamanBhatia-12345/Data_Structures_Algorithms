#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int w1,w2,x1,x2,m;
    cin >> w1 >> w2 >> x1 >> x2 >> m;
    w2 = w2 - w1;
    x1 *= m;
    x2 *= m;
    if(w2 >= x1 and w2 <= x2){
        cout << "1\n";
    }
    else{
        cout << "0\n";
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