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
    int res1 = 0, res2 = 0;
    for(int x : arr){
        if(x % 2 == 0)
          res1++;
        else
          res2++;  
    }  
    int ans = min(res1,res2);
    cout << ans << "\n";
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