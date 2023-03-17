#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x,y;
    int ans=1,l;
    cin >> x >> y;
    if(y==0)
      cout << x << "\n";
    else if(x==y){
      x--;  
      while(x != 0){
          ans+=2;
          x--; 
      }
      cout << ans << "\n";
    }
    else{
       l=y;
       y--;
       while(y != 0){
           ans+=2;
           y--;
       }
       ans++;
       ans += (x-l);
       cout << ans << "\n";
    }
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