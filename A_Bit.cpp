#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
  int t;
  cin >> t;
  int ans = 0;
  while(t--){
      string str;
      cin >> str;
      if((str[0] == '+' and str[1] == '+') or (str[1] == '+' and str[2] == '+'))
        ans++;
       if((str[0] == '-' and str[1] == '-') or (str[1] == '-' and str[2] == '-'))
         ans--;
  }
  cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}