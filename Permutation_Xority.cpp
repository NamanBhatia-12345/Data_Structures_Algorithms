#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int ans;
    if(n == 2){
      cout << "-1\n";
      return;
    }
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
      arr[i] = i;  
    if(n%2!=0){
      sort(arr.begin(),arr.end());
      for(int i=1;i<=n;i++)
        cout << arr[i] << " ";
      cout << "\n";  
    }  
    else{
       cout << "2 3 1 ";
       for(int i=4;i<=n;i++)
         cout << arr[i] << " ";
       cout << "\n";  
    }
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