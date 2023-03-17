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
    int count=1,ans=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1])
          count++;
        else{
           ans=max(ans,count);
           count=1; 
        }  
    }
    ans=max(ans,count);
    cout << ans << "\n";  
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