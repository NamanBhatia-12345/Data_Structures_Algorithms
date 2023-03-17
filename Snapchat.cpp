#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for(int i=0;i<n;i++)
      cin >> arr1[i];
    for(int i=0;i<n;i++)
      cin >> arr2[i];
    int cnt = 0, ans = 0;
    for(int i=0;i<n;i++){
        if(arr1[i] > 0 and arr2[i] > 0)
          cnt++;
        else{
            ans = max(ans,cnt);
            cnt = 0;
        }  
    }
    ans = max(ans,cnt);
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