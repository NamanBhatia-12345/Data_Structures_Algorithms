#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int x = 0, y = 0;
    for(int i=0;i<n;i++){
        if(x == 1 and y == 1){
            cout << "YES\n";
            return;
        }
        else if(str[i] == 'U')
          y++;
        else if(str[i] == 'D')
          y--;
        else if(str[i] == 'R')
          x++;
        else
          x--;      
    }
    if(x == 1 and y == 1){
        cout << "YES\n";
        return;
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