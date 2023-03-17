#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    int ans = (arr[1] - arr[0]) + (arr[2] - arr[1]);
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}