#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    if(n == 2){
        cout << "2 1\n";
        return;
    }
    for(int i=2;i<=n;i+=2)
        cout << i << " ";
    for(int i=3;i<=n;i+=2)
        cout << i << " ";
    cout << "1\n";    
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