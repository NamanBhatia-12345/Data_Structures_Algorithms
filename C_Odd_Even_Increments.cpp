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
    int even = 0,odd = 0;  
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0)
          even++;
        else
          odd++;  
    }  
    if(even == n || odd == n){
        cout << "YES\n";
        return;
    }
    bool flag = false;
    for(int i=1;i<n;i++){
        if(((arr[i] % 2 == 0) && (arr[i-1] % 2 != 0)) || ((arr[i] % 2 != 0) && (arr[i-1] % 2 == 0)))
           flag = true;
        else{
            flag = false;
            break;
        }   
    }
    if(flag){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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