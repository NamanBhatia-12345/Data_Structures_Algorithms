#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
string binary_conversion(int x){
    string res = "";
    while(x != 0){
        int y = x % 2;
        if(y == 1) res.push_back('1');
        else  res.push_back('0');
        x = x / 2;
    }
    return res;
}
void solve(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    for(int i=1;i<=n;i++){
    string val = binary_conversion(i);
    int temp = count(val.begin(),val.end(),"101");
    if(temp >= k)
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