#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
bool check_digit(int n){
    set<int> mp;
    int var;
    while(n!=0){
        var = n%10;
        mp.insert(var);
        n=n/10;
    }
    if(mp.size()==4)
      return true;
    return false;  
}
void solve(){
    int n;
    cin >> n;
    int ans;
    n++;
    while(true){
       if(check_digit(n)){
           ans = n;
           break;
       }
       n++; 
    }
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