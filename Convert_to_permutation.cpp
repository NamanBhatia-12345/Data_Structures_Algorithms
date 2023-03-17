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
    bool fg = false;
    int ans = 0, cnt = 0;
    for(int i=0;i<n;i++){
        cnt += ((i + 1) - arr[i]);
        if(cnt < 0){
            fg = true;
            break;
        }
        else{
            ans += cnt;
            cnt = 0;
        }
    }
    if(fg == true){
        cout << "-1\n";
        return;
    }
    else{
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