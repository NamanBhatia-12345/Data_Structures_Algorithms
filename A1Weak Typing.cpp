#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    if(n==1)
      return 0;
    int ans=0,flag1=0,flag2=0;
    for(int i=1;i<n;i++){
        if(str[i]=='F'&&str[i-1]=='F')
          continue;
        if((str[i]=='X'&&str[i-1]=='X')||(str[i]=='F'&&str[i-1]=='X')||(str[i]=='X'&&str[i-1]=='F')){
            flag1=1;
            if(flag2==1){
                ans++;
                flag2=0;
            }
        }
        if((str[i]=='O'&&str[i-1]=='O')||(str[i]=='F'&&str[i-1]=='O')||(str[i]=='O'&&str[i-1]=='F')){
            flag2=1;
            if(flag1==1){
                ans++;
                flag1=0;
            }
        }
        if((str[i]=='X'&&str[i-1]=='O')||(str[i]=='O'&&str[i-1]=='X')){
              ans++;
              flag1=0;
              flag2=0;
        }
    }  
    return ans;
}
int main()
{
ios;
int t;
cin >> t;
int result;
for(int i=1;i<=t;i++){
    result=solve();
    cout << "Case #" << i << ": " << result << "\n";
}
return 0;
}
