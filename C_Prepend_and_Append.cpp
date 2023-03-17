#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int i = 0, j = n - 1, ans = 0;
    while(j >= i){
        if(str[i] != str[j]){
            i++;
            j--;
            continue;
        }
        else{
            ans += (j - i + 1);
            break;
        }
    }
    cout << ans << "\n";
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