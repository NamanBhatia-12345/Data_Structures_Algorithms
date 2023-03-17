#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(l1 <= l2 && l2 <= r1){
        cout << l2 << "\n";
    }else if(l1 > l2 && l1 <= r2){
        cout << l1 << "\n";
    }else{
        cout << (l1+l2) << "\n";
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