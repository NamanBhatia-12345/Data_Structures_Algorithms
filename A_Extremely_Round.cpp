#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=1;i<=10;i++)
      arr.push_back(i);
    for(int i=20;i<=100;i+=10)
      arr.push_back(i);
    for(int i=200;i<=900;i+=100)
      arr.push_back(i);
    for(int i=1000;i<=10000;i+=1000)
      arr.push_back(i);    
    for(int i=20000;i<=100000;i+=10000)
      arr.push_back(i);
    for(int i=200000;i<=1000000;i+=100000)
      arr.push_back(i);      
    for(int i=2000000;i<=999999;i+=1000000)
      arr.push_back(i);  
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > n)
          break;
        ans++;  
    }
    cout << ans << "\n";  
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