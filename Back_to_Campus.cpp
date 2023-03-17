#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,k;
    cin >> n >> k;
    if(n<=k){
        cout << "1\n";
        return;
    }
    if(n%k==0)
      cout << (n/k) << "\n";
    else
      cout << (n/k)+1 << "\n"; 
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