#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> qb;
ll ans , res, temp;
ll solve(int n){
    qb.push_back(0);
    qb.push_back(1);
    qb.push_back(2);
    qb.push_back(3);
    qb.push_back(4);
    if(n <= 4)
      return qb[n];
    for(int i=5;i<=n;i++){
        temp = ((qb[i-1] + qb[i-2] + qb[i-3] + qb[i-4])*1LL); 
        qb.push_back(temp);
    }  
    temp = qb[n];
    return temp;
}
int main()
{
int n;
cin >> n;
ans = solve(n);
cout << ans << endl;
return 0;
}