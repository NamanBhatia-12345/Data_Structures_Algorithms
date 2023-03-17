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
    sort(arr.begin(),arr.end());
    int i = 0, j = n - 1;
    int ans = INT_MIN;
    while(i < j){
        int x = abs(arr[j] - arr[i]);
        ans = max(ans,x);
        i++;
        j--;
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