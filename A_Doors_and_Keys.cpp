#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    int n=str.length();
    bool flag=false;
    int r=0,b=0,g=0;
    for(int i=0;i<n;i++){
       if(str[i]=='r')
         r++;
       else if(str[i]=='g')
         g++;
       else if(str[i]=='b')
         b++;
       else if((str[i]=='B'&&b>0)||(str[i]=='R'&&r>0)||(str[i]=='G'&&g>0))
         flag = true;   
       else{
           flag=false;
           break;
       }       
    }
    if(flag==true)
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