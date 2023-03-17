#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,x;
    cin >> n >> x;
    int count = 0;
    while(n != 0){
       if(n % 3==0){
           n--;
           continue;
       } 
       else{
           count += x;
           n--;
       }
    } 
    cout << count << "\n";
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