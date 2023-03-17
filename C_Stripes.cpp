#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    const int n = 8;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
          cin >> arr[i][j];
    }
    int r = 0, b = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 'R')
              r++;
        }
        if(r == 8){
            cout << "R\n";
            break;
        }
        else{
            r = 0;  
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j][i] == 'B')
              b++;
        }
        if(b == 8){
            cout << "B\n";
            break;
        }
        else{
            b = 0;
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