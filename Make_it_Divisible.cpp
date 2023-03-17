#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin >> arr[i];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%3!=0)
          count++;
    }  
    if(count%2!=0){
        cout << "-1\n";
        return;
    }
    cout << (count/2) << "\n";
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