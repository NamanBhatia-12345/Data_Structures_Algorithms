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
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        if(x == 1){
            int k1,k2;
            cin >> k1 >> k2;
            arr[k1 - 1] = k2;
        }
        else{
            int z;
            cin >> z;
            cout << arr[z - 1] << "\n";
        }
    }  
}
int main()
{
ios;
solve();
return 0;
}