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
    set<int> st;
    ll ans = LONG_MIN;
    ll sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum += (arr[j] * 1LL);
            ans = max(ans,sum);
            st.insert(ans);
        }
        sum = 0;
        ans = LONG_MIN;
    }
    ll res = 0;
    set<int> :: iterator itr;
    // for(itr = st.begin(); itr != st.end(); itr++)
    //   cout <<  (*itr) << " ";
   for(itr = st.begin(); itr != st.end(); itr++)
      res += ((*itr) * (1LL));
    cout << res <<  "\n"; 
}
int main()
{
ios;
solve();
return 0;
}