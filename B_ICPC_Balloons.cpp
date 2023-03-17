#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<bool> v(26,false);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(v[str[i] - 'A'] == false){
            v[str[i] - 'A'] = true;
            ans += 2;
        }
        else  
          ans++;
    }
    cout << ans << "\n";
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