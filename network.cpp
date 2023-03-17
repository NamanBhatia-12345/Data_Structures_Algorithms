#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> arr1(m),arr2(m);
    for(int i=0;i<m;i++)
      cin >> arr1[i];
    for(int i=0;i<m;i++)
      cin >> arr2[i];
    unordered_map<int,int> mp;
    for(int i : arr1)
       mp[i]++;
    for(int j : arr2)
      mp[j]++;   
    vector<int> freq;
    for(auto itr : mp){
        freq.push_back(itr.second);
    }
    bool fg1 = false ,fg2 = false, fg3 = false;
    int cnt = 0;
    int cnt1 = 0;       
    for(int i : freq){
        if(i == 2)
           cnt1++;
    }
    for(int i: freq){
        if(i == 2)
          cnt++;
        if(i == n-1)
          fg3 = true;  
    }
    if(cnt == 1)
      fg1 = true;
    if(cnt1 == n)
      fg3 = true;  
    if(fg1 == true){
        cout << "1\n";
    }  
    else if(fg2 == true){
        cout << "2\n";
    }
    else if(fg3 == true){
        cout << "3\n";
    }
    else{
        cout << "-1\n";
    }
}
int main()
{
ios;
solve();
return 0;
}