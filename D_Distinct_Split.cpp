#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    unordered_map<char,int> mp1,mp2;
    int ans = INT_MIN, x;
    int y = 0;
    for(int i : str)
      mp1[i]++;
    for(int i=0;i<n-1;i++){
        mp2[str[i]]++;
        if(mp1[str[i]] <= 1){
          y++;
          mp1[str[i]]--;
        }
        else  
          mp1[str[i]]--;
        x = (mp1.size() + mp2.size() - y);
        ans = max(ans, x);
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