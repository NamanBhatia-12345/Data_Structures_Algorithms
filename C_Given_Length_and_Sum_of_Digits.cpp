#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int m,s;
    cin >> m >> s;
    if(m == 1 && s == 0){
        cout << "0 0\n";
        return;
    }
    else if(m > 1 && s == 0){
        cout << "-1 -1\n";
        return;
    }
    string a = "";
    string b = "";
    for(int i=0;i<m;i++){
        int res = min(9,s);
        a.push_back('0' + res);
        s -= res;
    }
    if(s > 0){
        cout << "-1 -1\n";
        return;
    }
    for(int i=m-1;i>=0;i--){
        b.push_back(a[i]);
    }
    int j = 0;
    while(b[j] == '0')
      j++;
    b[0]++;
    b[j]--;   
    cout << b << " " << a << "\n";
}
int main()
{
ios;
solve();
return 0;
}