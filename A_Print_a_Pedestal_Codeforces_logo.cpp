#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int res;
    if(n % 3 == 0){
        res = n/3;
        cout << res << " " << (res+1) << " " << (res-1) << "\n";
    }
    else if(n % 3 == 1){
        res = n/3;
        if((res-2) == 0){
            cout << (res) << " " << (res+2) << " " << (res-1) << "\n";
        }
        else{
          cout << (res+1) << " " << (res+2) << " " << (res-2) << "\n";
        }
    }
    else{
        res = n/3;
        cout << (res+1) << " " << (res+2) << " " << (res-1) << "\n";
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