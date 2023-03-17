#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++){
      cin >> x[i]; 
      cin >> y[i];
      cin >> z[i];
    }
    int s1=0,s2=0,s3=0;
    for(auto a:x)
      s1+=a;
    for(auto b:y)
      s2+=b;  
    for(auto c:z)
      s3+=c;  
    if((s1==0)&&(s2==0)&&(s3==0))
      cout << "YES\n";
    else
      cout << "NO\n";  
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}