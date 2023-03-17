#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(){
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
      cin >> v[i];
    int sum=0;
    for(int i=0;i<n;i++)
       sum += v[i];
    int res=(sum % m);   
    return res;      
}
int main()
{
ios;
int t;
cin >> t;
int ans;
for(int i=1;i<=t;i++){
ans = solve();
cout << "Case #" << i << ": " << ans << "\n";
}
return 0;
}