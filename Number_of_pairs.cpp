#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    ll sum1 = 0,sum2 = 0,sum3 = 0;
    int n;
    cin >> n;
    if(n == 1){
        cout << "1\n";
        return;
    }
    vector<ll> fact;
    for (ll d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            fact.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        fact.push_back(n);
    if(fact.size() == 1){
        cout << "2\n";
        return;
    }    
    map <ll,ll> mp;
    ll total = 1,val;
    for(ll i=0;i<fact.size();i++)
      mp[fact[i]]++; 
    vector<ll> res;  
    for(auto x:mp)
        res.push_back(x.second);  
    for(ll i=0;i<res.size();i++){
        val = res[i] + 1;
        total = total * (val);
    }
    cout << total << "\n"; 
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