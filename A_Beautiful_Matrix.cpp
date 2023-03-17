#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n = 5;
    vector<vector<int>> arr(n,vector<int> (n));
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        cin >> arr[i][j];
    int l =0 ,m = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 1){
                l = i;
                m = j;
                break;
            }
        }
    } 
    int ans = abs(l - 2) + abs(m - 2);
    cout << ans << "\n";  
}
int main()
{
ios;
solve();
return 0;
}