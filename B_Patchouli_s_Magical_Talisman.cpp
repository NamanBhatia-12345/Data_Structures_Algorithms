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
	int c1 = 0,c2 = 0,cnt = 0;
	int val = INT_MAX;
	int res,ans;
	for(int i=0;i<n ;i++){
		if(arr[i] % 2 == 0)
		  c1++;
		else
		  c2++;  
	}  
	if(c2 >= c1){
		cout << min(c1,c2) << "\n";
		return;
	}
	else if(c2 != 0 && c1 > c2){
		cout << c1 << "\n";
		return;
	}
	else{
		for(int i=0;i<n;i++){
			res = arr[i];
			while(res != 0){
				if(res % 2 == 0){
					cnt++;
					res = res/2;
				}
				else
				  break;  
			}
			val = min(val,cnt);
			cnt = 0; 
		}
		ans = val + (n - 1);
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
