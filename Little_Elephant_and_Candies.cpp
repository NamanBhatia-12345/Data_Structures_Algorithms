#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,c;
    cin >> n >> c;
    int arr[n];
    for(int i=0;i<n;i++)
      cin >> arr[i];
    int sum=0;
    for(int i=0;i<n;i++)
      sum+=arr[i];
    if(sum<=c)
      cout << "Yes\n";
    else
      cout << "No\n";    
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