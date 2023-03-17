#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<string> str(n);
    for(int i=0;i<n;i++)
        cin >> str[i];
    unordered_set<string> mp;
    string res = "";
    bool flag = false;
    for(int i=0;i<n;i++){
        res = str[i];
        for(int j=0;j<n;j++){
            mp.insert(res + str[j]);
            res = str[i];
            if(mp.find(str[i]) != mp.end()){
               cout << "1";
               flag = true;
               break;
            }
        }
        if(flag == false)
          cout << "0";
    }
    cout << "\n";
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