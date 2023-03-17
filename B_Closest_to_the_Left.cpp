#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<k;i++){
        int x;
        cin >> x;
        int l = -1, r = n;
        while(r > l + 1){
            int m = (l + r) / 2;
            if(arr[m] <= x)
              l = m;
            else
              r = m;   
        }
        cout << (l + 1) << "\n";
    }
}
int main()
{
ios;
solve();
return 0;
}