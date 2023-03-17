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
    bool flag = true;   
    int ans = 0,res = arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(res > arr[i]){
            res = arr[i];
            continue;
        }
        else{
            int temp = arr[i];
            while(temp >= res && temp != 0){
                temp = temp/2;
                ans++;
            }
            arr[i] = temp;
            res = arr[i];
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i] > arr[i-1])
          continue;
        else{
            flag = false;
            break;
        }  
    }  
    if(flag == false)
      cout << "-1\n";
    else  
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