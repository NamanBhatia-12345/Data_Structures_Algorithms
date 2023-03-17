#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    ll s = 0;
    for(int i : arr)
      s += (i * 1LL);  
    ll ans = 1;
    ll s1 = 0, g;
    for(int i=0;i<n-1;i++){
        s1 += (arr[i] * 1LL);
        g = (__gcd(s1,(s - s1)));
        ans = max(ans,g);
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