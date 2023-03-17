#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,t;
    cin >> n >> t;
    string str;
    cin >> str;
    int i=1;
    while(t!=0){
        if((i<n)&&(str[i]=='G')&&(str[i-1]=='B'))
           swap(str[i],str[i-1]);
        i++;   
        t--;
    }
    cout << str << "\n";
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