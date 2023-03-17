#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,k;
    cin >> n >> k;
    int rem=240-k;
    if(rem<5){
        cout << "0\n";
        return;
    }
    int count=0;
    int j=1;
    while(rem>=(5*j)){
        count++;
        rem -= (5*j);
        j++;
    }
    cout << count << "\n";
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