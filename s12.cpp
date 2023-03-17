#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int m,n;
    cin >> m >> n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
          cin >> arr[i][j];
    }
    vector<int> res;
    for(int i=0;i<m;i++){
       int ans = arr[i][0];
        for(int j=1;j<n;j++){
            if(ans < arr[i][j])
              ans = arr[i][j];
        }
        res.push_back(ans);
    }
    for(int i=0;i<m;i++)
      cout << res[i] << " ";
    cout  << endl;  
}
int main()
{
ios;
solve();
return 0;
}