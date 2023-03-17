#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    if(k % n == 0){
        for(int i : arr)
          cout << i << " ";
        cout << "\n";
        return;  
    }  
    vector<int> res;
    int x = (n - k %  n);
    for(int i=x;i<n;i++)
      res.push_back(arr[i]);
    for(int i=0;i<x;i++)
      res.push_back(arr[i]);
    for(int i=0;i<n;i++)
      cout << res[i] << " ";
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