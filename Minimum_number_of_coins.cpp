#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x;
    cin >> x;
    int count = 0;
    while(x != 0){
        if(x >= 5 && x < 10){
            count++;
            x -= 5;
        }
        else if(x < 5){
            cout << "-1\n";
            return;
        }
        else{
            count++;
            x -= 10;
        }
    }
    cout << count << "\n";
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