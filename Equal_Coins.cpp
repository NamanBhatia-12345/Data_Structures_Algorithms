#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x,y;
    cin >> x >> y;
    int s1=x+(y*2);
    if((x%2==0)&&(y%2==0)&&(x!=0||y!=0))
      cout << "YES\n";
    else if((x==0)&&(y%2!=0))
      cout << "NO\n";  
    else if(s1%2==0)
      cout << "YES\n";  
    else
      cout << "NO\n";  
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