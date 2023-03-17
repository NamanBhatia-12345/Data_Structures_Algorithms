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
    vector<int> p(n);
    p[0] = arr[0];
    for(int i=1;i<n;i++)
      p[i] = __gcd(p[i-1],arr[i]);  
    vector<int> s(n);  
    s[n-1] = arr[n-1];
    for(int i=n-2;i >= 0;i--)
       s[i] = __gcd(s[i+1],arr[i]);
    int ans = 0,res;
    for(int i=0;i<n;i++){
        if((i == 0 && s[1] > 1) || (i == n-1 && p[n-2] > 1))
           ans++;
        else {
            res = __gcd(p[i-1],s[i+1]);
            if(res > 1)
              ans++;
        }   
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