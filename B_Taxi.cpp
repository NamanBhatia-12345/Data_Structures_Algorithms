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
      int sum = 0;  
    for(int i=0;i<n;i++)  sum += arr[i];
    if(sum <= 4){
      cout << "1\n";
      return;
    }
    vector<int> f(4,0);
    for(int i=0;i<n;i++){
        if(arr[i] == 1)
          f[0]++;
        else if(arr[i] == 2)
          f[1]++;
        else if(arr[i] == 3)
          f[2]++;
        else 
          f[3]++;
    }
    int ans = f[3];
    if(f[2] != 0 and f[0] == 0){
        ans += f[2];
        f[2] = 0;
    }
    if(f[2] !=0 and f[0] != 0){
        if(f[2] == f[0]){
           ans += f[2];
           f[2] = 0;
           f[0] = 0;
        }
        else if(f[2] > f[0]){
            ans += f[0];
            f[2] = (f[2] - f[0]);
            ans += f[2];
            f[0] = 0;
        }
        else{
            ans += f[2];
            f[2] = 0;
            f[0] = f[0] - f[2];
        }
    }
    if(f[1] != 0){
        if(f[1] % 2 == 0)
          ans += (f[1] / 2);
        else{
            ans += (f[1] - 1) / 2;
            if(f[0] >= 2){
                ans++;
                f[0] -= 2;
            }
            else
              ans++;
        }
    }
    if(f[0] != 0){
       if(f[0] % 4 == 0)
         ans += (f[0] / 4);
       else
         ans += (f[0] / 4) + 1;
    }
    cout <<  ans << "\n";     
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