#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr(12);
    for(int i=0;i<12;i++)
      cin >> arr[i];
    sort(begin(arr),end(arr));
    int ans = 0;
    int cnt = 0;
    for(int i=11;i>=0;i--){
        if(ans < n){
          ans += arr[i];
          cnt++;
        }
        else {
            break;
        }
    }
    if(ans < n){
        cout << "-1\n";
    }  
    else{
        cout << cnt << "\n";
    }
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