#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
      pq.push(arr[i]);
    vector<int> ans;  
    while(y--){
      if(!pq.empty()){
        int val = pq.top();
        if((val ^ x) > val){
          val = val ^ x;
          pq.pop();
          pq.push(val);
        }
        else break;
      } 
    }
    if((y+1) % 2 != 0){
        int res = pq.top();
        res = res ^ x;
        pq.pop();
        pq.push(res);
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<n;i++)
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