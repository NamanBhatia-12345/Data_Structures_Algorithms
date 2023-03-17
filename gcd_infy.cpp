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
    int ans = -1;  
    vector<int> mp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int res = __gcd(arr[i],arr[j]);
            mp.push_back(res);
        }
    }
    sort(mp.begin(),mp.end());
    int m = mp.size();
    if(mp[0] != 2){
        ans = 2;
        cout << ans << "\n";
        return;
    }
    for(int i=1;i<m;i++){
        if(mp[i] - mp[i-1] > 1){
            ans = mp[i-1] + 1;
            break;
        }
    }  
    if(ans == -1){
        ans = mp[m-1] + 1;
        cout << ans << "\n";
    }
    else{
        cout << ans << "\n";
    }
}
int main()
{
ios;
solve();
return 0;
}