#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,x,c;
    cin >> n >> x >> c;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr.begin(),arr.end());
    int sum = 0;
     for(int i=0;i<n;i++)
        sum += arr[i];
    vector<int> diff(n,0);
    for(int i=0;i<n;i++)
      diff[i] = x - arr[i];
    int ans = sum, l = 0;
    for(int i=0;i<n;i++){
        sum += diff[i];
        l++;
        ans = max(ans, (sum - (l * c)));
    }
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