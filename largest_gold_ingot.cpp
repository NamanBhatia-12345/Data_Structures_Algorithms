#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define mod 1000000007
void solve(){
    int n;
    cin >> n;
    int b,h;
    cin >> b >> h;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    stack<int> s1;
    int res = ((b%mod)*(h%mod))%mod;
    int ans1,ans2,ans;
    int sum=0;
    int max_vol=0;
    int top; 
    int volume_with_top;
    int i = 0;
    for(auto ch:arr)
      sum += ch;
    ans1 = ((res%mod)*(sum%mod))%mod;  
    while (i < n)
    {
        if (s1.empty() || arr[s1.top()] <= arr[i])
            s1.push(i++);
        else
        {
            top = s1.top();  
            s1.pop();  
            volume_with_top = arr[top] * (s1.empty() ? i :
                                   i - s1.top() - 1);
            if (max_vol < volume_with_top)
                max_vol = volume_with_top;
        }
    }
    while (s1.empty() == false)
    {
        top = s1.top();
        s1.pop();
        volume_with_top = arr[top] * (s1.empty() ? i :
                                i - s1.top() - 1);
 
        if (max_vol < volume_with_top)
            max_vol = volume_with_top;
    }
    ans2 = ((max_vol%mod)*(res%mod))%mod; 
    ans = (ans1 - ans2)%mod;
    cout << ans;
}
int main()
{
ios;
// int t;
// cin >> t;
// while(t--){
solve();
// }
return 0;
}