#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,x;
    cin >> n >> x;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
          cin >> arr[i][j];
    }
    int ans = 0;
    vector<pair<int,int>> a;
    int v1 = 0,v2 = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 'P'){
                
            }
            else
              a[1]++;  
        }

    }
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