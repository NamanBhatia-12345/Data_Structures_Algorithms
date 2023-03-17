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
    sort(arr.begin(),arr.end());  
    int count=0;  
    vector<int> r1={6,7,13,14,20,21,27,28};
    for(int i=0;i<n;i++){
        if(binary_search(r1.begin(),r1.end(),arr[i]) == false)
          count++;
    }
    count += r1.size();
    cout << count << "\n";  
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