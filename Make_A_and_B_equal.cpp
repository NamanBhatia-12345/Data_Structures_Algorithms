#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,b;
    cin >> a >> b;
    if(a == b){
        cout << "YES\n";
        return;
    }
    int temp = a;
    if(a > b)
      temp = b;
    if(temp == a){
        while(a <= b){
            if(a == b){
                cout << "YES\n";
                return;
            }
            a = a*2;
        }
        cout << "NO\n";
    }
    else{
         while(b <= a){
            if(a == b){
                cout << "YES\n";
                return;
            }
            b = b*2;
        }
        cout << "NO\n";

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