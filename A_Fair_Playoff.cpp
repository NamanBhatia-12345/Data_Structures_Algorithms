#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    vector<int> arr(4);
    for(int i=0;i<4;i++)
      cin >> arr[i];
    vector<int> v1 = arr;
    sort(v1.begin(),v1.end());
    int ans1 = v1[2],ans2 = v1[3];
    int val1 = max(arr[0],arr[1]),val2 = max(arr[2],arr[3]);
    if((val1 == ans1&&val2 == ans2)||(ans2 == val1&&ans1 == val2))
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