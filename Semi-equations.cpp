#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define M 1000000007
map<long, long> F;
long fib(long n) {
	if (F.count(n)) return F[n];
	long k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (fib(k)*fib(k) + fib(k-1)*fib(k-1)) % M;
	} else { // n=2*k+1
		return F[n] = (fib(k)*fib(k+1) + fib(k-1)*fib(k)) % M;
	}
}

void solve(){
    ll n;
    cin >> n;
    F[0] = F[1] = 1;
    if(n == 0){
      cout << "0\n";
      return;
    }
    ll ans = fib(n);
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