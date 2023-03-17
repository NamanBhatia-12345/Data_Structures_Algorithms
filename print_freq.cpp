#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    int n = str.length();
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[str[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[str[i]] != 0){
            cout << str[i] << "->" << mp[str[i]] << "\n";
            mp[str[i]] = 0;
        }
    }
}
int main()
{
ios;
solve();
return 0;
}