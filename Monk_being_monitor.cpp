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
    map<int,int> mp;
    for(int i=0;i<n;i++)
      mp[arr[i]]++;  
    sort(arr.begin(),arr.end());  
    int ans = 0;
    int x = abs(mp[arr[0]] - mp[arr[n-1]]);
    if(arr[0] > arr[n-1] && x != 0){
        ans = x;
        cout << ans << "\n";
    }
    else{
        cout << "1\n";
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