#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        ans = max(ans,(str[i] - 'a' + 1));
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