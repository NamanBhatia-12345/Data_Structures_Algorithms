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
    int k;
    cin >> k;
    priority_queue<int> mp; // max - heap 
    for(int i=0;i<n;i++)
      mp.push(arr[i]);
    int x;  
    while(k--){
        if(!mp.empty()){
          x = mp.top();
          mp.pop();
        }
        if(x % 2 != 0)
          x = x/2 + 1;
        else
          x = x/2;  
        mp.push(x);  
    }   
    int sum = 0;
    while(!mp.empty()){
        sum += mp.top();
        mp.pop();
    }
    cout << sum << "\n";
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