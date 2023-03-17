#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,c;
    cin >> a >> c;
    if((a + c) % 2 == 0){
        cout << ((a + c) / 2) << "\n"; 
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