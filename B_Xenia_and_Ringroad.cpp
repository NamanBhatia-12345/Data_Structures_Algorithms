#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> arr(m);
    for(int i=0;i<m;i++)
      cin >> arr[i];  
    int ans = arr[0] - 1;
    for(int i=1;i<m;i++){
        if(arr[i] == arr[i-1])
          continue;
        else if(arr[i] > arr[i-1])
          ans += (arr[i] - arr[i-1]);
        else{
           if(arr[i-1] == n && arr[i] == 1)
             ans++;
            else if(arr[i-1] == n)
             ans += (n-arr[i])   
           ans +=  n -(arr[i] - 1);
        }  
    }    
    cout << ans << "\n";
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}