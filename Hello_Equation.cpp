#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x;
    cin >> x;
    int a = -1, b = -1;
    int n = sqrt(x);
    for(int i=1;i<=n;i++){
        int num = (x - 2*i);
        int den = (2 + i);
        if(num % den == 0){
            a = (num / den);
            b = i;
            break;
        }
    }
    if(a > 0 && b > 0){
        cout << "YES\n";
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