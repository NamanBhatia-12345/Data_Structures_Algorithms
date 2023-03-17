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
    int ans = -1;
    for(int i=0;i<n;i++){
        if(x == arr[i])
          ans = i + 1;  
    }
    cout << ans << "\n";

}
int main()
{
ios;
solve();
return 0;
}