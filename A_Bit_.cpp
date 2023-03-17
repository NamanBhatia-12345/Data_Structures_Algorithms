#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int ans=0;
    while(n--){
        string s;
        cin >> s;
        if(s[0]=='+'||s[1]=='+')
          ans++;
        if(s[0]=='-'||s[1]=='-')
          ans--;  
    }
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}