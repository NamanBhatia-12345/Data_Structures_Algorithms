#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
bool check_prime(int n){
      for(int i=2;i*i<=n;i++){      
       if(n % i == 0)
        return false;
    }
    return true;
}
void solve(){
    vector<int> prime;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
       cin >> arr[i];
    for(int i=0;i<n;i++){
       if(check_prime(arr[i]))
         prime.push_back(arr[i]);
   }
   if(prime.size() == 0){
    cout << "-1\n";
    return;
   }   
   int mx = prime[0];
   int ans = -1;
   for(int i=1;i<prime.size();i++){
        if(prime[i] > mx){
           ans = mx; 
           mx = prime[i];
        }
   }     
   cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}