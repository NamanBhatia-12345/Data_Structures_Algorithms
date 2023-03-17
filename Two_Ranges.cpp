#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    map<int,int> mp;
    for(int i=a;i<=b;i++)
      mp[i]++;
    for(int i=c;i<=d;i++)
      mp[i]++;
    cout << mp.size() << "\n";    
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