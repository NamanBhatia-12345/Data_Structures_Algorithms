#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    sort(str.begin(),str.end());
    int count=1;
    // bjmmrwz
    for(int i=1;i<str.length();i++){
        if(str[i]!=str[i-1])
          count++;
    }
    if(count%2==0)
      cout << "CHAT WITH HER!\n";
    else
      cout << "IGNORE HIM!\n";
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