#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(){
    string str,ftr;
    cin >> str >> ftr;
    int n=str.length(),m=ftr.length();
    int sum=0,ans=INT_MAX,res1,res2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          res1=26-abs(str[i]-ftr[j]);
          res2=abs(str[i]-ftr[j]);
          ans=min({ans,res2,res1});
        }
        sum+=ans;
        ans=INT_MAX;
    }
    return sum;
}
int main()
{
ios;
int t,ans;
cin >> t;
for(int i=1;i<=t;i++){
ans=solve();
cout << "Case #" << i << ": " << ans << "\n";
}
return 0;
}