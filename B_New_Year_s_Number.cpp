#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    if(n < 2020){
        cout << "NO\n";
        return;
    }
    if((n % 2020 == 0) or (n % 2021 == 0)){
        cout << "YES\n";
        return;
    }
    bool flag = true;
    int x = 0;
    while(n != 0){
        x = n % 10;
        if((x > 0) and (n >= 2021))
          n -= 2021;
        else if((x == 0) and (n >= 2020))
          n -= 2020; 
        else{
            if((n < 2020) and (n != 0)){
                flag = false;
                break;
            }
        }   
    }
    if(flag){
        cout << "YES\n";
    }else{
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