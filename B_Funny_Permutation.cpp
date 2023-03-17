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
    if(n == 3){
        cout << "-1\n";
        return;
    }
    cout << n << " " << n-1 << " ";
    for(int i=1;i<=n-2;i++){
        cout << i << " "; 
    }
    cout << "\n";
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