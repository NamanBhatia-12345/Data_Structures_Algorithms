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
    vector<pair<int,string>> mp;
    for(int i=0;i<n;i++){
      int a;
      string str;  
      cin >> a >> str;
      mp.push_back(make_pair(a,str));
    }
    vector<int> res;
    for(int i=0;i<n;i++){
        int ans = arr[i];
        string s1 = mp[i].second;
        for(char ch : s1){
            if((ch == 'D') && (ans == 9))
              ans = 0;
            else if(ch == 'D')
              ans++;
            else if((ch == 'U') && (ans == 0))
              ans = 9;    
            else 
              ans--;  
        }
        res.push_back(ans);
    }
    for(int it : res)
      cout << it << " ";
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