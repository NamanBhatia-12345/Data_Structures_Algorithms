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
    int ans = 0,count = 0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }  
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            count++;
            flag = false;
        }
    }
    if(flag){
    for(auto x : mp){
        if(x.second >= 2){
           ans++;
           count++;
           break;
        }
    }
    }
    if(count != 0){
        ans += abs(n - count);
    }else{
        ans = n+1;
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