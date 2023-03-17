#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> mp(200001,0);
    vector <int> v(n);
    for(int i=0;i<n;i++)
      cin >> v[i];
    int mii = INT_MIN;
    for(int i=0;i<n;i++){
        mii=max(mii,v[i]);
    }  
    for(int i=0;i<n;i++)
      mp[v[i]]++;
    int mi=INT_MAX;
    bool flag=true;
    for(int i=1;i<=mii;i++){
        if(mp[i]==1){
            flag=false;
            mi=min(mi,i);
        }
    }
    if(flag==true){
        cout << "-1\n";
        return;
    }
    int indx;
    for(int i=0;i<n;i++){
        if(v[i]==mi){
            indx = i+1;
            break;
        }
    }
    cout << indx << "\n";
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