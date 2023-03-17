#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int res,ans;
    if(n%7==0){
        cout << n << "\n";
        return;
    }
    else{
        for(int i=0;i<=9;i++){
            res=(n-(n%10)+i);
            if(res%7==0)
              ans=res;
        }
    }
    cout << ans << "\n";
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