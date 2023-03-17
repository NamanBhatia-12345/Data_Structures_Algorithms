#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++)
      cin >> arr[i];
    sort(arr,arr+n);  
    ll sum2=0,ans=0,x=arr[n-1],sum1=0,sum=0;
    for(ll i=0;i<n-1;i++){
        if(arr[i]%2==0){
            while(arr[i]!=1){
                if(arr[i]%2==0)
                  ans++;
                else
                  break;
               arr[i]/=2;     
            }
            arr[n-1]=(pow(2,ans)*x);
        }
        else
          continue;
    }  
    for(ll i=0;i<n;i++)
      sum1+=arr[i];
    sort(arr,arr+n);   
    ans=0,x=arr[n-2];  
    for(ll i=n-1;i>=0;i--){
        if((arr[i]%2==0)&&(i!=n-2)){
            while(arr[i]!=1){
                if(arr[i]%2==0)
                  ans++;
                else
                  break;
               arr[i]/=2;     
            }
            arr[n-2]=(pow(2,ans)*x);
        }
        else
          continue;
    } 
    for(ll i=0;i<n;i++)
      sum2+=arr[i];
    sum=max(sum1,sum2);     
    cout << sum << "\n";  
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