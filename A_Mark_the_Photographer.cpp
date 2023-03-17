#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> arr(n+n);
    for(int i=0;i<2*n;i++)
      cin >> arr[i];
    bool flag = false;  
    sort(arr.begin(),arr.end());
    int j = n;
    for(int i=0;i<n;i++){
        int val = arr[j++];
        if((j < 2*n)&&(val - arr[i] >= 6))
          flag = true;
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
int t;
cin >> t;
while(t--){
solve();
}
return 0;
}