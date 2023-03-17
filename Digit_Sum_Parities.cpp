#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    int sum1 = 0;
    while(temp != 0){
        sum += (temp%10);
        temp /= 10;
    }
    temp = n+1;
    if((n+1) % 10 == 0){
        while(temp != 0){
        sum1 += (temp%10);
        temp /= 10;
      }
      if((sum%2 == 0 && sum1%2 != 0) || (sum%2 != 0 && sum1%2 == 0)){
          cout << (n+1)  << "\n";
      }
      else{
          cout << (n+2) << "\n";
      }
    }
    else{
        cout << (n+1) << "\n";
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