#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
	string str;
	cin >> str;
	int ans = INT_MIN;
	int res = 1;
	for(int i=1;i<str.length();i++){
		if(str[i] == str[i-1]){
			res++;
		}
		else{
			ans = max(ans,res);
			res = 1; 
		}
	}
	ans = max(ans,res);
	cout << ans << "\n";
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