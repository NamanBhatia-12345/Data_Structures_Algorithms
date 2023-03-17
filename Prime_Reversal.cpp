#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    int x1 = 0, x2 = 0;
    for(int i=0;i<n;i++){
        if(s1[i] == '0')
          x1++;
        else
          x2++;  
    }
    for(int i=0;i<n;i++){
        if(s2[i] == '0')
           x1--;
        else
          x2--;   
    }
    if(x1 == 0 and x2 == 0)
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