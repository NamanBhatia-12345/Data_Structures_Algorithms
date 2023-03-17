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
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1])
          continue;
        else{
            ans += abs(arr[i] - arr[i-1]) * 1LL;
            arr[i] = arr[i-1];
        }  
    }  
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}