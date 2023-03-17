#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
      arr[i]=(i+1);
    int k=n;  
    for(int i=1;i<n&&k!=1;i++){
        swap(arr[i-1],arr[i]);
        k--;
    }
    for(int i=0;i<n;i++)
      cout << arr[i] << " ";
    cout << "\n";    
}
int main()
{
ios;
solve();
return 0;
}