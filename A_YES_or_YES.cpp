#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    bool flag = false;
    if(str[0] == 'Y' || str[0] == 'y')
      flag = true;
    else{
        cout << "NO\n";
        return;
    }
    if(str[1] == 'e' || str[1] == 'E')
      flag = true; 
    else{
        cout << "NO\n";
        return;
    }
    if(str[2] == 's' || str[2] == 'S')
      flag = true;
    else{
        cout << "NO\n";
        return;
    }
    if(flag == true)
      cout << "YES\n";
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