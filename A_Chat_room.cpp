#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    int n = str.length();
    bool ok1 = false,ok2 =false,ok3 =false,ok4 =false;
    vector<int> mp(5,-1);
    int ans = 0;
    for(int i=0;i<n;i++){
       if(str[i] == 'h' && ok1 == false){
        mp[0] = i;
        ok1 = true;
        }
       else if(str[i] == 'e' && ok2 == false){
        mp[1] = i;
        ok2 = true;
       }
       else if(str[i] == 'l' && ans == 0){
        mp[2] = i;
         ans++;
       }
       else if(str[i] == 'l' && ans != 0 && ok4 == false){
        mp[3] = i;
        ans++;
        ok4  = true;
       }
       else if(str[i] == 'o' && ok3 == false){
        mp[4] = i;
        ok3 = true;
       }
    }
    bool flag = false;
    if(ans < 2){
      cout << "NO\n";
      return;
    }
    else{
        if((mp[0] < mp[1]) && (mp[1] < mp[2]) && (mp[2] < mp[3]) && (mp[3] < mp[4]))
            flag = true;
        else
            flag = false;  
        }
        if(flag) 
          cout << "YES\n";
        else
          cout << "NO\n";  
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