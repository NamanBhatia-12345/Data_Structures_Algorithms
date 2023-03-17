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
    int x = arr[0];
    for(int i=1;i<n;i++){
        x = __gcd(x,arr[i]);
    }  
    int ans = -1;
    map<int,int> mp;
    for(int i=0;i<n;i++)
      mp[arr[i]] = i+1;
    for(int i=1;i<=1000;i++){
        for(int j=i;j<=1000;j++){
            if(mp.find(i) != mp.end() and mp.find(j) != mp.end()){
                x = __gcd(i,j);
                if(x == 1){
                    ans = max(ans,(mp[i] + mp[j]));
                }
            }
        }
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