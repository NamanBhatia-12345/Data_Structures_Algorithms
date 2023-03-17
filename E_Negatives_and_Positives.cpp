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
    ll sum = 0, ans = 0;
    for(int i : arr)
      ans += i;
    for(int i=1;i<n;i++){
        if(arr[i] <= 0 && arr[i-1] <= 0){
            arr[i] *= (-1);
            arr[i-1] *= (-1);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
          sum += (arr[i] * 1LL);
        }
        else{
            if(arr[i - 1] < (arr[i] * (-1))){
                sum -= arr[i - 1];
                arr[i] *= (-1);
                sum += (arr[i] * 1LL);
                ans = max(ans,sum);
            }
        }  
    }
    ans = max(ans,sum);
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