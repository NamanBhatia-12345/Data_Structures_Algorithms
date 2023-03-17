#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
vector<ll> multiplyPrevNext(int n,vector<ll> &arr){
    vector<ll> ans;
    if(n == 2){

        ans.push_back(arr[0] * arr[1]);
        ans.push_back(arr[0] * arr[1]);
        return ans;
    }
    int val = 0;
    ans.push_back(arr[0] * arr[1]);
    for(int i=1;i<n-1;i++){
        if((i + 1) < n)
          val = (arr[i+1] * arr[i-1]);
        ans.push_back(val);
    }
    ans.push_back(arr[n-1] * arr[n-2]);
    return ans;
}
int main()
{
ios;
int n;
cin >> n;
vector<ll> arr(n);
for(int i=0;i<n;i++){
    cin >> arr[i];
}
vector<ll> result = multiplyPrevNext(n,arr);
for(ll i : result)
  cout << i << " ";
cout << endl;  
return 0;
}