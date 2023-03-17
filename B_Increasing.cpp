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
    sort(arr.begin(),arr.end());
    if(n == 1){
        cout << "YES\n";
        return;
    }  
    bool ans = true;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[i-1])
          continue;
        else{
            ans = false;
            break;
        }  
    }
    if(ans == true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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