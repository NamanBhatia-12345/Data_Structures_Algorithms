#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,w;
    cin >> n >> w;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    sort(begin(arr),end(arr));
    if(n == 1){
        cout << "1\n";
        return;
    }
    int ans = 0,s = 0;
    for(int i=0;i<n;i++){
        s += arr[i];
        if(s > w){
            ans++;
            s = arr[i];
        }
    }
    cout << (ans + 1) << "\n";

}
int main()
{
ios;
solve();
return 0;
}