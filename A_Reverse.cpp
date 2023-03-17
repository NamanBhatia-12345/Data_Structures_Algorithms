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
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i])
          continue;
        else
        {
            swap(arr[i-1],arr[i]); 
            break;  
        }
    }
    for(auto x:arr)
      cout << x << " ";
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