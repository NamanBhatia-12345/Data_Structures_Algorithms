#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    if(n <= 2){
        cout << "NO\n";
        return;
    }
    map<string,int> mp;
    int i = 0, j = 0;
    string s = "";
    while(j < n){
        s += str[j];
        if((j - i + 1) == 2){
            mp[s]++;
            s = str[j];
            i++;
        }
        j++;
    }
    bool fg = false;
    for(auto itr : mp){
        if(itr.second > 1)
           fg = true;
    }
    if(fg == true)
        cout << "YES\n";
    else
        cout << "NO\n";
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