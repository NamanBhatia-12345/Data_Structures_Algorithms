#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int x = n-1;
    vector<int> arr(x);
    for(int i=0;i<x;i++)
      cin >> arr[i];
    int ans = arr[0];
    int s1 = 0, s2 = 0;
    for(int i=0;i<x;i++){
        if(i - 1 >= 0){
        s1 += arr[i-1];
        s2 += arr[i-1];
        }
        else
          s1 += arr[i];
        if(s1 - s2 < arr[i]){
            ans += arr[i] - (s1 - s2);
            s1 += arr[i] - (s1 - s2);
        }  
        ans += arr[i];
    }
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