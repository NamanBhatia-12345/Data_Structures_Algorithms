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
    int res = 0, sum = 0;
    for(int i : arr)
      res += i;
    sum = res;  
    int ans = INT_MIN;
    for(int i=1;i<n;i++){
        sum -= (arr[i] + arr[i-1]);
        if(arr[i-1] == 1)
          sum += (arr[i-1] * (-1));
        else
          sum += (arr[i-1] * (-1));
        if(arr[i] == 1)
          sum += (arr[i] * (-1));
        else
          sum += (arr[i] * (-1));
        ans = max(ans,sum);
        sum = res;        
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