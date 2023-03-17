#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
      cin >> arr[i];
    sort(arr.begin(),arr.end());
    ll sum1=arr[n-1],sum2=0;
    ll r=1,b=0;
    ll i=0,j=n-2;
    while(i<=j){
        if((sum1>sum2)&&(b<=r)){
          sum2+=arr[i];
          b++;
          i++;
        }
        else if(sum1<=sum2){
            sum1+=arr[j];
            r++;
            j--;
        }
        else if(sum1>sum2){
          sum2 += arr[i];
          b++;  
          i++;  
        }  
        else if((sum1<=sum2)&&(b>r)){
            sum1 += arr[i-1];
            sum2 -= arr[i-1];
            i--;
            j--;
            b++;
            r--;
        }
        else{ 
        sum2 += arr[i];
        i++;
        r++;
        }
    }
    if((sum1>sum2)&&(b>r)){
      cout << "YES\n";  
      return;
    }
    sum1+=arr[j];
    sum2-=arr[j];r++;b--;
    if((sum1>sum2)&&(b>r))
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