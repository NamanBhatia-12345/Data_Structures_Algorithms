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
    int f1 = 0,f2 = 0;
    bool fg = true;   
    if(arr[0] == 50 and arr[0] == 100){
        cout << "NO\n";
        return;
    }  
    else{
        for(int i=0;i<n;i++){
            if(arr[i] == 25)
              f1++;
            else if(arr[i] == 50){
                if(f1 > 0){
                    f1--;
                    f2++;
                }
                else{
                    fg = false;
                    break;
                }
            }
            else if(arr[i] == 100){
                if(f1 > 0 and f2 > 0){
                    f1--;
                    f2--;
                }
                else if(f1 >= 3)
                  f1 -= 3;
                else{
                    fg = false;
                    break;
                }
            }  
        }
    }
    if(fg == true){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
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