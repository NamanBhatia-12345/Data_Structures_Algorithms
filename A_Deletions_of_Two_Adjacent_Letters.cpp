#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str1,str2;
    cin >> str1 >> str2;
    int n = str1.length();
    for(int i=0;i<n;i++){
        if(str1[i] == str2[0] && i%2 == 0){
            cout << "YES\n";
            return;
        }
    }
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