#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    int ans = INT_MIN;
    int res = min(k,(n-1));
    for(int i=0;i<n;i++)
      ans = max(ans,arr[i]);
    if(k >= (n-1)){
        cout << ans << "\n";
        return;
    }    
    else{
       sort(arr.begin(),arr.end());
       int ans = arr[res];
       cout << ans << "\n";
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