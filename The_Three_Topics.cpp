#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int arr[4];
    for(int i=0;i<4;i++)
      cin >> arr[i];
    int x = arr[3];
    bool flag = false;  
    for(int i=0;i<3;i++){
        if(arr[i] == x){
            flag = true;
            break;
        }
    }
    if(flag == true)
      cout << "Yes\n";
    else
      cout << "No\n";  
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}