#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,s,r;
    cin >> n >> s >> r;
    int mx = (s - r),x,y,z;
    if(r % (n - 1) == 0){
        x = (r / (n - 1));
        for(int i=0;i<n-1;i++)
          cout << x << " ";
        cout << mx << "\n";  
    }
    else{
        x = (r / (n - 1));
        y = (r % (n - 1));
        z = (n - 1 - y);
        for(int i=0;i<z;i++)
          cout << x << " ";
        while(y--)
          cout << (x + 1) << " ";
        cout << mx << "\n";  
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