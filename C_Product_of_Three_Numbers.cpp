#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int a = n,b = n,c = n;
    
    for(int i=2;i*i <= n;i++){
        if(n % i == 0){
            a = i;
            break;
        }
    }
    n = n/a;
    for(int i=2;i*i<=n; i++){
        if(n % i == 0){
            if(i != a){
                b = min(b,i);
            }
            if((n/i) != i){
                if((n/i) != a){
                    b = min(b,(n/i));
                }
            }
        }
    }
    c = n/b;
    if(a != b && b != c && c != 1){
        cout << "YES\n";
        cout << a << " " << b << " " << c << "\n";
    }
    else{
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