#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll x1,p1;
    cin >> x1 >> p1;
    ll x2,p2;
    cin >> x2 >> p2;
    ll res1=1,res2=1;
    res1=(int) pow((10.0,p1)+0.5);
    res2=(int) pow((10.0,p2)+0.5);
    res1=res1*x1;
    res2=res2*x2;
    if(res1>res2)
      cout << ">\n";
    else if(res1==res2)
      cout << "=\n";
    else  
      cout << "<\n";    
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