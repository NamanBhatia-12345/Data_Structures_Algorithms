#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
      cin >> a[i];
    for(int i=0;i<n;i++)
      cin >> b[i];
    vector<int> temp(a.begin(),a.end());
    for(int i=0;i<n;i++)
       temp.push_back(b[i]);
    sort(temp.begin(),temp.end());
    int ans = INT_MAX;
    ans = min(ans,(temp[n-1] - temp[0]));
    ans = min(ans,(temp[(2*n) - 1] - temp[n]));  
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