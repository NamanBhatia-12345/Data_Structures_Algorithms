#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,l,r,k;
    cin >> n >> l >> r >> k;
    int arr[n];
    for(int i=0;i<n;i++)
      cin >> arr[i];
    sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<n;i++){
        if((arr[i]>=l)&&(arr[i]<=r)&&(k>=arr[i])){
            sum++;
            k=k-arr[i];
        }
    }  
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