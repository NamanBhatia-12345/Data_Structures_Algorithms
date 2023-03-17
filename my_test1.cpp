#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    bool flag = true;
    vector<int>  mp;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0)
          mp.push_back(1);
        else
          mp.push_back(0);  
    } 
    for(int i=1;i<mp.size();i++){
        if(mp[i] != mp[i-1])
          continue;
        else{
            flag = false;
            break;
        }  
    }
    if(flag == true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
int main()
{
int t;
cin >> t;
while(t--){
solve();
}
return 0;
}