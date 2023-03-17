#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    string s1="",s2="";
    for(int i=0;i<3;i++)
      s1 += str[i];
    for(int i=3;i<6;i++)
     s2 += str[i]; 
    int x1,x2;  
    x1 = stoi(s1);
    x2 = stoi(s2);
    int sum1=0,sum2=0;
    while(x1!=0){
        sum1 += x1%10;
        x1 /= 10;
    }
    while(x2!=0){
        sum2 += x2%10;
        x2 /= 10;
    }
    if(sum1 == sum2)
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