#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
      cin >> a[i];
    for(int i=0;i<n;i++)
      cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    bool flag=false;
    int res;
    for(int i=0;i<n;i++){
      res=(b[i]-a[i]);
      if(res>1||res<=-1){
          cout << "NO\n";
          return;
      }   
    }
    cout << "YES\n";    
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