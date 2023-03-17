#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    int n = str.length();
    vector<int> arr;
    for(int i=0;i<n;i++){
        if(str[i] == '0')
          arr.push_back(i);
    }
    int x = 1;
    int mx = 0;
    for(int i=1;i<arr.size();i++){
        if(arr[i] == arr[i-1] + 1)
          x++;
        else {
            mx += (x / 2);
            x = 1;
        }
    }
    mx += (x / 2);
    int ans = (n - mx);
    cout << ans << "\n";
}
int main()
{
ios;
int t = 1;
//cin >> t;
while(t--){
solve();
}
return 0;
}