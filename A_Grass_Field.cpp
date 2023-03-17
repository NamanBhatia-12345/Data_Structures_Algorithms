#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
          cin >> arr[i][j];
    }
    int ones = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j] == 1)
              ones++;
        }
    }
    if(ones == 4){
        cout << "2\n";
    }
    else if(ones == 3 || ones == 2){
        cout << "1\n";
    }
    else if(ones == 1){
        cout << "1\n";
    }
    else {
        cout << "0\n";
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