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
    int m;
    cin >> m;
    vector<int> q(m);
    for(int i=0;i<m;i++)
      cin >> q[i];
    int sum=0,res;
    for(int i=0;i<m;i++){
        for(int i=0;i<n;i++){
           res = __gcd(arr[i],abs(m-arr[i]));
           if(res == arr[i])
             sum++;
       }
       cout << sum << endl;
       sum=0;
    }   
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}