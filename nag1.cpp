#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    int n = str.length();
    string s1 = "";
    int cnt1 = 0, cnt2 = 0;
    for(int i=0;i<n;i++){
        if(str[i] == '_')
          cnt1++;
        else if(str[i] >= 'A' and str[i] <= 'Z')
          cnt2++;    
        else
          continue;  
    }
    if(cnt1 == 0 and cnt2 == 0){
        cout << str << "\n";
    }
    else if(cnt1 != 0){
        for(int i=0;i<n;i++){
            if((i + 1 < n) and str[i] == '_')
              str[++i] -= 32; 
            s1 += str[i];  
        }
        cout << str << "\n";
    }
    else{
        for(int i=0;i<n;i++){
            if(str[i] >= 'A' and str[i] <= 'Z'){
                s1 += '_';
                s1 += (str[i] + 32);
            }
            s1 += str[i];
        }
        str = s1;
        s1 = "";
        cout << str << "\n";
    }
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