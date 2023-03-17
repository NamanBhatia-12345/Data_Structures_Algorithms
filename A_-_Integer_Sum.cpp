#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    int ans = 0;
    for(int i : arr)
      ans += i;
    cout << ans << "\n";    
}
int main()
{
ios;
int t = 1;
//cin >> t;
while(t--){
solve();
}
return 0;
}