#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.first < b.second;
}
void solve(){
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>> pii;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        pii.push_back({x,y});
    }
    sort(pii.begin(),pii.end());
    bool flag = true;
    for(int i=0;i<n;i++){
        if(s > pii[i].first)
          s += pii[i].second;
        else{
            flag = false;
            break;
        }  
    }
    if(flag == true)
      cout << "YES\n";
    else  
      cout << "NO\n";  

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