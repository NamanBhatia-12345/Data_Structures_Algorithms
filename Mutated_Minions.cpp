#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
       cin >> arr[i];
    for(int i=0;i<n;i++)
      arr[i]+=k;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]%7==0)
          ans++;
    }     
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