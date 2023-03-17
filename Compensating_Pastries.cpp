#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n),res(n,1);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i])
            res[i-1] = res[i] + 1;
    }
    for(int i=n-1;i>=0;i--){
        if((arr[i-1]<arr[i])&&(res[i-1]<=res[i]))
            res[i-1] = res[i] + 1;
    }
    int sum=0;
    for(int x:res)
        sum += x;
    cout << sum << "\n";
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