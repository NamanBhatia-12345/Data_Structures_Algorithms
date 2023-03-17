#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
string solve(string s){
    string res = "";
    int n = s.length();
    int dash = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '_')
          dash++;
    }
    if(dash == 0){
        for(int i=0;i<n;i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                res += '_';
                res += s[i] + 32;
            }
            else
              res += s[i];
        }
    }
    else if(dash == 1 && s[n-1] == '_'){
         for(int i=0;i<n;i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                res += '_';
                res += s[i] + 32;
            }
            else
              res += s[i];
        }
        
    }
    else{
        for(int i=0;i<n;i++){
            if(i + 1 < n && s[i] == '_'){
                res += (s[i + 1] - 32);
                i++;
                continue;
            }
            else
                res += s[i];
        }
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