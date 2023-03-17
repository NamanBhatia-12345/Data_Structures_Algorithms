#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<char,int> mp;
    for(int i=0;i<n;i++)
      mp[str[i]]++;
    int val = INT_MIN;
    bool fg = false;
    for(auto itr : mp){
        if(itr.second >= 2){
            val = max(val,(n - 2));
            fg = true;
        }
    }
    if(fg == false ){
        cout << "-1\n";
        return;
    }  
    cout << val << "\n";

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