#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,m;
    cin >> n;
    vector<int> boy(n);
    for(int i=0;i<n;i++)
      cin >> boy[i];
    cin >> m;  
    vector<int> girl(m);
    for(int i=0;i<m;i++)
      cin >> girl[i];
    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());
    int ans = 0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if((abs(boy[i] - girl[j])) <= 1){
          ans++;
          girl[j] = 1000;
          break;
        }
      }
    }
    cout << ans << "\n";     
}
int main()
{
ios;
solve();
return 0;
}