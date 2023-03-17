#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    char ch;
    cin >> ch;
    unordered_map<char,int> mp;
    int n = str.length();
    for(int i=0;i<n;i++)
      mp[str[i]]++;
    unordered_map<char,int> :: iterator itr = mp.begin();
    int ans = 0;
    while(itr != mp.end()){
        if(itr->first == ch){
            ans += itr->second;
        }
        itr++;
    }
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}