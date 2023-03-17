#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(){
    string st,p;
    cin >> st >> p;
    int ans = 0, j=0;
    for(int i=0;i<p.length();i++){
       if(st[j] == p[i]) j++;
       else  ans++;
    }
    // cout << j << "\n";
    if(j != st.length())
      return -1;  
    return ans;
}
int main()
{
ios;
int t;
cin >> t;
int ans;
for(int i=1;i<=t;i++){
ans = solve();
if(ans == -1)
   cout << "Case #" << i << ": " << "IMPOSSIBLE" << "\n"; 
else
   cout << "Case #" << i << ": " << ans << "\n";
}
return 0;
}