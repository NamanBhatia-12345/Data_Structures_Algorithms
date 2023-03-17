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
    int ans = 0, one = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1)
          one++;
    }  
    if(one % 2 == 0 and one != 0){
      n -= one;
      ans += (one / 2);
    }
    else if(one % 2 != 0){
      n -= (one - 1);
      ans += ((one - 1) / 2);
    }
    ans += n;
    cout << ans << "\n";   
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