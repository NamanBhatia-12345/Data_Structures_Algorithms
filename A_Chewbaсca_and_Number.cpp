#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr;
    while(n != 0){
        arr.push_back(n % 10);
        n /= 10;
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        ll y = arr[i];
        ll x = 9 - arr[i];
        ll z = min(x,y);
        if(i == 0 and z == 0)
          continue;
        else
          arr[i] = z;
    }
    for(int i=0;i<arr.size();i++)
      cout << arr[i];
    cout << "\n";  
}
int main()
{
ios;
solve();
return 0;
}