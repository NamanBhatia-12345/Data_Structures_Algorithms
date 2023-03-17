#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<vector<int>> mp;
    vector<int> x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            int temp;
            cin >> temp;
            x.push_back(temp);
        }
        mp.push_back(x);
        x.clear();
    }
    map<int,int> x1;
    for(int i=0;i<n;i++)
        x1[mp[i][0]]++; 
    int val = INT_MAX;
    int xx = -1;
    for(auto itr : x1)
      val = min(val,itr.second);
    for(auto itr : x1){
        if(val == itr.second){
          xx = itr.first;
          break;
        }
    }
    for(int i=0;i<n;i++){
        if(mp[i][0] == xx){
            for(int j=0;j<n-1;j++){
                x.push_back(mp[i][j]);
            }
            break;
        }
    }
    map<int ,int> mp1;
    for(int i=0;i<x.size();i++)
        mp1[x[i]]++;
    for(int i=1;i<=n;i++){
        if(mp1.find(i) == mp1.end()){
            cout << i << " ";
            break;
        }
    }
    for(int i : x)
      cout << i << " ";
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