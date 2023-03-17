#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    sort(begin(arr),end(arr));
    if(arr[0] == arr[n-1]){
        cout << "NO\n";
        return;
    }  
    cout << "YES\n";
    int l = 0, r = n - 1;
    while(l < r){
        cout << arr[r] << " " << arr[l] << " ";
        l++;
        r--; 
    } 
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