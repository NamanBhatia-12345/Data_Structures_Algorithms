#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int reverse(int n){
    int res = 0;
    while(n != 0){
        res = res*10 + (n % 10);
        n /= 10; 
    }
    return res;
}
void solve(){
    int x;
    cin >> x;
    if(x <= 9){
        cout << x << "\n";
        return;
    }
    int ans = 0;
    int sum = 0;
    for(int i=1;i<=9;i++)
        sum += i;
    if(sum < x){
        cout << "-1\n";
        return;
    }
    else{
    int y = 0;
    while(x != 0){
        ans = ans*10 + (9 - y);
        x -= (9 - y);
        y++;
      }
    int res = reverse(ans);
    cout << res << "\n";
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