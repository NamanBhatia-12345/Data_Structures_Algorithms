#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int d,l,r;
    cin >> d >> l >> r;
    if(d >= l and d <= r){
        cout << "Take second dose now\n";
    }
    else if(d > r){
        cout << "Too Late\n";
    }
    else{
       cout << "Too Early\n"; 
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