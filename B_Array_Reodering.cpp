#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
    cin >> arr[i];
  vector<int> temp,res;
  for(int i=0;i<n;i++){
    if(arr[i] % 2 == 0){
      temp.emplace_back(arr[i]);
    }    
    else{
      res.emplace_back(arr[i]);
    }
  }  
  sort(temp.begin(),temp.end());
  sort(res.begin(),res.end());
  int ans = 0;
  for(int i=0;i<res.size();i++){
    temp.emplace_back(res[i]);
  } 
  res.clear();
  int x;
  for(int i=0;i<temp.size();i++){
    for(int j=i+1;j<temp.size();j++){
        x = __gcd(temp[i],2*temp[j]);
        if(x > 1)
          ans++;
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