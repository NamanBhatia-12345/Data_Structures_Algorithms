#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<int> arr;
    while(n != 0){
        int x = n % 10;
        arr.push_back(x);
        n /= 10; 
    }
    ll ans = 0; 
    int te;
    for(int i = 0; i < arr.size(); i++){
       if(i == arr.size() - 1 && arr[i] == 9){
          ans = ans * 10 + te;  
           continue;
       }
       te =  min(arr[i] , (9 - arr[i]));
       ans = ans * 10 + te;  
    }
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}