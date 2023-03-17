#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x;
    cin >> x;
    if(x >= 1 && x < 100){
        cout << "Easy\n";
    }
    else if(x >= 100 && x < 200){
        cout << "Medium\n";
    }
    else{
        cout << "Hard\n";
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