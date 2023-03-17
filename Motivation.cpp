#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return a.second > b.second; 
}
void solve(){
    int n,x;
    cin >> n >> x;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i].first;
        cin >> arr[i].second; 
    }
    sort(arr,arr+n,cmp);
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(x >= arr[i].first){
            ans = max(arr[i].second,ans);
        }
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