#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i] == '5' || str[i] == '0')
          count++;
    }
    if(count >= 1){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
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