#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){  
    int n;
    cin >> n;
    int ans=1;
    if((n&1)==0){
    	ans=((n)*(n+1))/2;
    	cout << ans << "\n";
	}
	else{
		for(int i=2;i<=n;i++)
	      ans=ans*i;
	  	cout << ans << "\n"; 
	}
}
int main()
{
    ios;
    int t=1;
    //cin >> t;
    while(t--){
      solve();
    }
    return 0;
}
