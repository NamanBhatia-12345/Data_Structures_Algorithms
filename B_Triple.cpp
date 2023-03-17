#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin >> arr[i];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }  
    int ans = -1;
    for(auto it : mp){
        if(it.second >= 3){
            ans = it.first;
            break;
        }
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