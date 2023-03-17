#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector <int> mp;
    int even = 0, odd = 0;
    int res;
    while(n != 0){
        res = n%10;
        mp.push_back(res);
        n /= 10;
    }
    for(int i=0;i<mp.size();i++){
        if(mp[i] % 2)
          odd++;
         else if(mp[i] % 2 ==0 && mp[i] > 0)
           even++; 
    }
    if((even >= 2) || (odd >= 2))
      cout << "YES\n";
    else
      cout << "NO\n";  
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