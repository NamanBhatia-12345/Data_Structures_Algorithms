#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    char ch;
    cin >> ch;
    string s = "codeforces";
    for(char i : s){
        if(i == ch){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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