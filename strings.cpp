#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str1,str2;
    cin >> str1 >> str2;
    int x = 0, y = 0;
    int n = str1.length();
    for(int i=0;i<n;i++){
        if((str1[i] == str2[i]) || (str1[i] >= 'a' && str1[i] <= 'z' && str2[i] == '?') || (str2[i] >= 'a' && str2[i] <= 'z' && str1[i] == '?'))
          continue;
        else if(str1[i] != 'w?' && str2[i] != '?')
          y++;
    } 
    for(int i=0;i<n;i++){
        if((str1[i] == str2[i]) && (str1[i] != '?' && str2[i] != '?'))
          continue;
        else
          x++;  
    }
    cout << y << " " << x << "\n";
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