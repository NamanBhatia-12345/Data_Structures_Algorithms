#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    if(n <= 1399)
     cout << "Division 4\n";
    else if(n <= 1599 && n >= 1400)
      cout << "Division 3\n";
    else if(n >= 1600 && n <= 1899)
      cout << "Division 2\n";
    else 
      cout << "Division 1\n";     
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