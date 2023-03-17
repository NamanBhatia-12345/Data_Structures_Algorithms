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
    vector<int> mp(arr.begin(),arr.end());  
    sort(arr.begin(),arr.end());
    if(arr[0] == arr[n-1]){
        for(int i=0;i<n;i++)
          cout << "0 ";
        cout <<"\n";
        return;  
    }
    int mx1 = arr[n-1], mx2;
    for(int i=n-2;i>=0;i--){
        if(arr[i] != mx1){
            mx2 = arr[i];
            break;
        }
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(mp[i] == mx1)
          ans.push_back((mp[i] - mx2));
        else
          ans.push_back((mp[i] - mx1));  
    } 
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
    cout << "\n";    
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