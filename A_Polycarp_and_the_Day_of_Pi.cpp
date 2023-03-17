#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    string pie = "314159265358979323846264338327";
    int ans = 0;
    int n = str.size();
    int j = 0;
    for(int i=0;i<n;i++){
        if(str[i] == pie[j]){
          ans++;
          j++;
          continue;
        }
        else{
            break;
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