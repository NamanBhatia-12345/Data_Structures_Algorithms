#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int CloseToLeft(vector<int> &arr, int n ,int val){
    int l = -1;
    int r = n;
    while(r > l + 1){
      int m = (l + r) / 2;
      if(arr[m] <= val){
        l = m;
      }else{
         r = m;
      }
    }
    return l;
}
int CloseToRight(vector<int> &arr,int n ,int val){
    int l = -1;
    int r = n;
    while(r > l + 1){
      int m = (l + r) / 2;
      if(arr[m] >= val){
        r = m;
      }else{
         l = m;
      }
    }
    return r;
}
void solve(){
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
    cin >> arr[i];
  sort(arr.begin(),arr.end());
  int k ;
  cin >> k;
  for(int i=0;i<k;i++){
    int x,y;
    cin >> x >> y;
    int r1 = CloseToRight(arr,n,x);
    int r2 = CloseToLeft(arr,n,y);
    // cout << r1 << " " << r2 << "\n";
    int ans = (r2 - r1) + 1;
    cout << ans << " ";
  } 
  cout << endl; 
}
int main()
{
ios;
solve();
return 0;
}