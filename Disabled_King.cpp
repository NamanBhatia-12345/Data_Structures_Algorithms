#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    if(n%2==0)
      cout << n << "\n";
    else{
        cout << n-1 << "\n";
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