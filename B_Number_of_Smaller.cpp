#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n) , b(m);
    for(int i=0;i<n;i++)
      cin >> a[i];
    for(int i=0;i<m;i++)
      cin >> b[i];
    vector<int> c(m);  
    int i = 0;
    for(int j=0;j<m;j++){
       while(i < n && a[i] < b[j])
          i++;
        c[j] = i;  
    }
    for(int x : c){
        cout << x << " ";
    }     
    cout << endl;
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