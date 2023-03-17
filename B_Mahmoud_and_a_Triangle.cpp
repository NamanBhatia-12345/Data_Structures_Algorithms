#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin >> arr[i];
    sort(arr,arr+n);
    int j=2,sum;
    bool flag=false;
    for(int i=1;(i<n&&j<n);i++,j++){
        sum=(arr[i]+arr[i-1]);
        if(sum>arr[j]){
            flag=true;
            break;
        }
    }
    if(flag==true)
      cout << "YES\n";
    else
      cout << "NO\n";      
}
int main()
{
ios;
solve();
return 0;
}