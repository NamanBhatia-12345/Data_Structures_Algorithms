#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    if(n==3){
      cout << "3 1 2\n";
      return;
    }  
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)
      v[i] = i;  
    if(n%2==0){
        for(int i=2;i<=n;i+=2)
          swap(v[i-1],v[i]);
        for(int i=1;i<=n;i++)
          cout << v[i] << " ";
        cout << "\n";    
    }
    else{
        cout << v[2] << " " << v[1] << " " << v[n] << " ";
        for(int i=3;i<n;i++)
          cout << v[i] << " ";
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