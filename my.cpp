#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int ans1 = 0, ans2 = 0;
    for(int i=0;i<n;i++){
        if(str[i] == 'N')
          ans1++;
    }
    ans2 = (n-ans1);
    if(ans1 > ans2){
        cout << "Nutan\n";
    }
    else{
        cout << "Tusla\n";
    }
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