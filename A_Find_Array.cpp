#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
      arr[i]=i+2;
    for(int i=0;i<n;i++)
      cout << arr[i] << " ";    
    cout << "\n";
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