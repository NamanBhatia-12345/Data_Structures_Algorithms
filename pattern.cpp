#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == 0 || i == n-1){
                arr[i][j] = '*';
                continue;
            }
            else{
                if(j == 0 || j == n-1){
                    arr[i][j] = '*';
                }
                else{
                    arr[i][j] = ' ';
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(i == 0 || i == n-1)
          continue;
            for(int j=0;j<n;j++){
                if(i + j == n-1){
                   arr[i][j] = '*';
                }
            }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
}
int main()
{
ios;
solve();
return 0;
}