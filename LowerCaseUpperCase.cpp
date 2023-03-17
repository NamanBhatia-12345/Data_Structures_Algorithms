#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    getline(cin,str);
    int n = str.length();
    for(int i=0;i<n;i++){
        if(str[i] == ' ')
          continue;
        else if(str[i] >= 'A' && str[i] <= 'Z')
          str[i] = str[i] + 32;
        else
          str[i] = str[i] - 32;    
    }
    cout << str << "\n";
}
int main()
{
ios;
solve();
return 0;
}