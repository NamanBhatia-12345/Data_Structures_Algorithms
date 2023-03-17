#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    for(int i=0;i<n;i++)
      cin >> v1[i];
    for(int i=0;i<n;i++)
      cin >> v2[i];
    int ans = 0;
    for(int i=0;i<n;i++){
        if(v1[i] == v2[i])
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