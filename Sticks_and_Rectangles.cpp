#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
       mp[arr[i]]++;
    int ans = 0;   
    for(auto x : mp){
        if(x.second >= 2)
          continue;
        else
          ans++;  
    }   
    cout << (ans*2)-1 << "\n";
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