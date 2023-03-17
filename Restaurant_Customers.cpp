#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.second < b.second;
}
void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    unordered_map<int,char> mp;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        mp[a] = 'A';
        mp[b] = 'E';
        arr.push_back(a);
        arr.push_back(b);
    }
    int m = arr.size();
    sort(arr.begin(),arr.end());
    int ans = 0, mx = INT_MIN;
    for(int i=0;i<m;i++){
        if(mp[arr[i]] == 'A')
          ans++;
        else
          ans--;
        mx = max(ans,mx);    
    }
    mx = max(ans,mx); 
    cout << mx << "\n";
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