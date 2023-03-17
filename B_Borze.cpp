#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    string res="";
    for(int i=0;i<str.length();i++){
        if(str[i]=='.')
          res.push_back('0');
        else if(i+1<str.length()&&str[i]=='-'&&str[i+1]=='-'){
          res.push_back('2');
          i++;
        }  
        else if(i+1<str.length()&&str[i]=='-'&&str[i+1]=='.') {
          res.push_back('1');
          i++;
        }  
    }
    cout << res << "\n";
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