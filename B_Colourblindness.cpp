#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str1,str2;
    cin >> str1 >> str2;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(str1[i] == str2[i])
          continue;
        else if((str1[i] == 'B' and str2[i] == 'G') or (str1[i] == 'G' and str2[i] == 'B'))
          continue;
        else{
            flag = false;
            break;
        }     
    }
    if(flag == true){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
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