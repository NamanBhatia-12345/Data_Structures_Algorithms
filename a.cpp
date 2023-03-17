#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.first < b.second;
}
vector<int> largetland(vector<vector<int>> houses){
    int n = houses.size();
    vector<int> ans;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        arr.push_back({houses[i][0],houses[i][1]});
    }
    sort(arr.begin(),arr.end(),cmp);
    vector<pair<int,pair<int,int>>> temp;
    int val,x,y;
    for(int i=1;i<n;i++){
        val = arr[i].second - arr[i-1].second;
        x = arr[i-1].first;
        y = arr[i].first;
        temp.push_back({val,{x,y}});
    }
    sort(temp.begin(),temp.end());
    if(temp[n-1].first == temp[n-2].first){
        ans.push_back(temp[0].second.first);
        ans.push_back(temp[1].second.first);
    }
    else{
        ans.push_back(temp[n-2].second.first);
        ans.push_back(temp[n-1].second.first);
    }
    return ans;
}
int main()
{
ios;
int n,k;
cin >> n >> k;
vector<vector<int>> pii(n,vector<int> (2));
for(int i=0;i<n;i++){
    for(int j=0;j<2;j++)
      cin >> pii[i][j];
}
vector<int> res = largetland(pii);
for(int i : res)
  cout << i << " ";
cout << "\n";  
return 0;
}