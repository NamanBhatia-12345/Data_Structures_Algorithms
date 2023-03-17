#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    for(int i=1;i<str.length();i++){
        if(str[i] >= 65 && str[i] <= 90)
          str[i] = str[i] + 32; 
    }
    if(str[0] >= 97 && str[0] <= 122)
      str[0] = str[0] - 32;
    cout << str << "\n";
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}