#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
  int n,W;
  cin >> n >> W;
  int v[n],w1[n];
  for(int i=0;i<n;i++)
    cin >> v[i] >> w1[i];
  vector<pair<double,int>> wv;
  for(int i=0;i<n;i++)
    wv.push_back({((double)v[i]/(double)w1[i]),w1[i]});
  sort(wv.begin(),wv.end());  
  double sum=0.0;
  for(int i=n-1;i>=0;i--){
     if(W>=wv[i].second){
       sum+=((wv[i].first)*(wv[i].second));
       W-=wv[i].second;
     }
     else if(W<wv[i].second){
       sum+=(wv[i].first*W); 
       break;
     }
     else
      break;  
    }
   cout << fixed << setprecision(4) << sum << "\n";
}
int main()
{
ios;
solve();
return 0;
}