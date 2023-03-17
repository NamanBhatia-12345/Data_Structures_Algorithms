#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll a,b;
    cin >> a  >> b;
    if(a % 2 == 0){
        if((b - a) >= 2)
          cout << a << " " << a+2 << "\n";
        else
          cout << "-1\n";  
    }
    else{
        if((b - a) >= 3){
            if(a % 3 == 0)
              cout << a << " " << a+3 << "\n";
            else
              cout << a+1 << " " << a+4 << "\n";  
        }
      else
      cout << "-1\n";
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