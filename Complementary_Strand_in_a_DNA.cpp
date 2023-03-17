#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    string res = "";
    for(int i=0;i<n;i++){
        if(str[i] == 'A')
          res.push_back('T');
        else if(str[i] == 'T')
          res.push_back('A');
        else if(str[i] == 'C')
          res.push_back('G');
        else
          res.push_back('C');      
    }
    cout << res << "\n";
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