#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(str[i] == '1')
          ans++;
    }
    if(n == 1)
        cout << "NO\n";
    else if((n > 2) and (ans <= 3))
        cout << "YES\n";
    else if(n == 2 and ans == 2)
        cout << "YES\n";
    else 
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