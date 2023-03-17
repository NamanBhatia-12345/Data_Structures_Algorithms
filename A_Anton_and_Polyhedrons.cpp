#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    int ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == "Tetrahedron")
          ans += 4;
        else if(arr[i] == "Cube")
          ans += 6;
        else if(arr[i] == "Octahedron")
          ans += 8;  
        else if(arr[i] == "Dodecahedron")
          ans += 12;
        else
          ans += 20;      
    }  
    cout << ans << "\n";
}
int main()
{
ios;
solve();
return 0;
}