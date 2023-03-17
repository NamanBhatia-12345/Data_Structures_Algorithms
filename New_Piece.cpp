#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,b,p,q;
    cin >> a >> b >> p >> q;
    int ans;
    if((a+b)==(p+q))
        ans=0;
    else if(((a+b)%2==0)&&((p+q)%2==0))
      ans=2;
    else if(((a+b)%2!=0)&&((p+q)%2!=0))
      ans=2;  
    else if(((a+b)%2==0)&&((p+q)%2!=0))
      ans=1;
    else if(((a+b)%2!=0)&&((p+q)%2==0))
      ans=1;
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