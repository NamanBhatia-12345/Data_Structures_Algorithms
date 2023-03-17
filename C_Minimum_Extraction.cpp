#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
      cin >> v[i];
    sort(v.begin(),v.end());
    if(n==1){
        cout << v[n-1] << "\n";
        return;
    }
    if(v[0]==v[n-1]){
        cout << "0\n";
        return;
    } 
    int res=v[0];
    for(int i=1;i<n;i++){
        res=max(res,(v[i]-v[i-1]));
    }
    cout << res << "\n";
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