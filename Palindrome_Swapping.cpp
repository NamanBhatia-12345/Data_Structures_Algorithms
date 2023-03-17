#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string s1,s2;
    cin >> s1 >> s2;
    map<char,int> mp1;
    for(int i=0;i<s1.length();i++)
      mp1[s1[i]]++;
    for(int i=0;i<s2.length();i++)
      mp1[s2[i]]--;
    bool ans = true;  
    if(s1.length() & 1)
        ans &= (s1[s1.length() / 2]==s2[s1.length() / 2]);  
    for(auto itr : mp1){
        if(itr.second < 0){
            ans = false;
            break;
        }
    }
    if(ans == true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
int main()
{
ios;
solve();
return 0;
}