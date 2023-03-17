#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int x,y,k,n;
    cin >> x >> y >> k >> n;
    vector<pair<int,int>> pc(n);
    for(int i=0;i<n;i++)
      cin >> pc[i].first >> pc[i].second;
    bool flag=false;  
    for(int i=0;i<n;i++){
        if((pc[i].first>=(x-y))&&(pc[i].second<=k)){
            flag=true;
            break;
        }
    }  
    if(flag==true)
      cout << "LuckyChef\n";
    else
      cout << "UnluckyChef\n";  
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