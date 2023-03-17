#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int s,a,b,c;
    cin >> s >> a >> b >> c;
    int x;
    if(c > 0){
        x = s * c;
        if(x % 100 == 0)
          x /= 100;
        else
          x = (x/100) + 1;
        x += s;     
    }
    else{
        if(c < 0){
           x = s * c;
        if(x % 100 == 0)
          x /= 100;
        else
          x = (x/100) + 1;
        x -= s;  
        }
        else  
           x = s;
    }
    if(x >= a && x <= b){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
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