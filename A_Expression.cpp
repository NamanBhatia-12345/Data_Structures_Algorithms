#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int ans = (a + b + c);
    int y1,y2,y3;
    y1 = (a*b*c);
    y2 = (a + b)*c;
    y3 = a*(b + c);
    ans = max(ans,max(max(y1,y2),y3));
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}