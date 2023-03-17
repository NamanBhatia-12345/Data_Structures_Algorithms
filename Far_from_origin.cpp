#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x = (x1 * x1) + (y1 * y1);
    int y = (x2 * x2) + (y2 * y2);
    if(x > y)
      cout << "ALEX\n";
    else if(y > x)
      cout << "BOB\n";
    else
      cout << "EQUAL\n";      
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