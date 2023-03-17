#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
      v[i] = i+1;
    reverse(v.begin(),v.end());
    int n1=n,j=1,k=2;
    while(n1--){
        for(int i=0;i<n;i++)
          cout << v[i] << " ";
        if((n-k)<n)  
          swap(v[n-j],v[n-k]);
        j++;
        k++;
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