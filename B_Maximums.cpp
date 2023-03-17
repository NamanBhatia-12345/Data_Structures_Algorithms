#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
     ll n;
     cin >> n;
     ll arr[n];
     for(int i=0;i<n;i++){
          cin >> arr[i];
     }
     ll sum=0;
     for(ll i=0;i<n;i++){
          sum+=arr[i];
          if(sum<=0){
               sum+=abs(arr[i]);
               arr[i]=0;
          }
          else{
            arr[i]=sum;
          }   
     }
     for(ll i=0;i<n;i++)
       cout << arr[i] << " ";
     cout << endl;  
}
int main()
{
ios;
solve();
return 0;
}