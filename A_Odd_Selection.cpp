#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    int s1 = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0)
          s1++;
    }
    int s2 = n - s1;
    int res = min(s1,s2);
    if(res >= x){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
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