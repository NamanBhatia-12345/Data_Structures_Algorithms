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
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    } 
    bool fg = true;
    for(auto itr : mp){
        if(itr.second % 2 != 0){
          fg = false;
          break;
        }
    }
    if(fg == true){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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