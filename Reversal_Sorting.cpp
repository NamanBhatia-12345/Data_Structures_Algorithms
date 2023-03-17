#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            if(arr[i] + arr[i-1] <= x){
                swap(arr[i],arr[i-1]);
            }
            else{
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";  
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