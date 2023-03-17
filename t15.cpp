#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
string solve(string s){
    int n = s.length();
    string res = "";
    map<char,int> mp;
    for(int i=0;i<n;i++)
      mp[s[i]]++;
    for(auto itr : mp){
        res += itr.first;
        res += to_string(itr.second);
    }  
    return res;
}
int main()
{
ios;
string s;
cin >> s;
string ans = solve(s);
cout << ans << "\n";
return 0;
}