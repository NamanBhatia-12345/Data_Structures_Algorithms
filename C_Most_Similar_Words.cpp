#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int calculate(string s1,string s2){
     int ans = 0;
     for(int i=0;i<s1.length();i++){
         ans += abs(s1[i] - s2[i]); 
     }
     return ans;
}
void solve(){
    int n,m;
    cin >> n >> m;
    vector<string> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    vector<int> ans;
    int sum;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i != j){
                sum = calculate(arr[i],arr[j]);
                ans.push_back(sum);
            }
        }
    }
    sort(ans.begin(),ans.end());
    int res = ans[0];
    cout << res << "\n";   
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