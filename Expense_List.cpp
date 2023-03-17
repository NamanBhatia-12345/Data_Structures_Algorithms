#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,x;
    cin >> n >> x;
    int ans = 1;
    for(int i=0;i<x;i++)
      ans *= 2;
    while(n--)
      ans /= 2;
    cout << ans << "\n";    
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