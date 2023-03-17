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
    if(arr[0]==arr[n-1])
      cout << "0\n";
    else
      cout << (arr[n-1]-arr[0]) << "\n";    
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