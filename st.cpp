#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    string arr = "";
    string ans = "";
    int n = str.length();
    // vector<char> arr;
    for(int i=0;i<n;i++){
        if(str[i] == '#')
          ans.push_back(str[i]);
        else
           arr.push_back(str[i]);  
    }
    cout << (ans + arr) << "\n";
}
int main()
{
ios;
solve();
return 0;
}