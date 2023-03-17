#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> v1(n),v2(n);
    for(int i=0;i<n;i++)
      cin >> v1[i];
    for(int i=0;i<n;i++)
      cin >> v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    ll sum=0;
    for(int i=0;i<n;i++){
        sum=sum+((ll)(v1[i]) * (ll)(v2[i]));
    }    
    cout << sum << "\n"; 
}
int main()
{
ios;
solve();
return 0;
}