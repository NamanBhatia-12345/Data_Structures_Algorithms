#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    if((a-b) == 2 || (b-a) == 2){
        cout << "1\n";
    }
    else if(((a+1) != b) && ((b+1) != a)){
        cout << "0\n";
    }
    else if(a == 1 || b == 1){
        cout << "1\n";
    }
    else if((a == (n-1) && b == n) || (b == (n-1) && a == n)){
        cout << "1\n";
    }
    else{
       cout << "2\n";
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