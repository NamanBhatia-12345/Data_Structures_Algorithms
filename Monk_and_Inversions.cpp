#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
          cin >> arr[i][j];
    }
    int ans = 0;
    vector<int> arr1;
    vector<pair<int,int>> arr2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr1.push_back(arr[i][j]);
            arr2.push_back({i,j});
        }
    }
    int m = arr1.size();
    int x = -1,y = -1,p = -1,q = -1;
    for(int i=0;i<m;i++){
        for(int j = i+1;j<m;j++){
            x = arr2[i].first;
            y = arr2[i].second;
            p = arr2[j].first;
            q = arr2[j].second;
            if((arr1[i] > arr1[j]) && (x <= p && y <= q))
                ans++;
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