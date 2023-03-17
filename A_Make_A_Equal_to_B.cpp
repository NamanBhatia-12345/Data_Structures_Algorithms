#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
      cin >> a[i];
    for(int i=0;i<n;i++)
      cin >> b[i];
    int ans = 0, c1 = 0, c2 = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 1)  c1++;
        if(b[i] == 1)  c2++;
    }    
    if(c1 == c2){
        for(int i=0;i<n;i++){
            if(a[i] != b[i]){
                ans++;
                break;
            }
        }
        cout << ans << "\n";
    }
    
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