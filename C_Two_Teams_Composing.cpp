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
    if(n == 1){
        cout << "0\n";
        return;
    }  
    set<int> sz;
    for(int i : arr)
      sz.insert(i);
    int ans1 = sz.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
      mp[arr[i]]++;
    int ans2 = INT_MIN;  
    for(auto itr : mp){
        if(itr.second >= 2)
           ans2 = max(ans2,itr.second - 1);
        else
          ans2 = max(ans2,itr.second);   
    } 
    cout << min(ans1,ans2) << "\n";
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