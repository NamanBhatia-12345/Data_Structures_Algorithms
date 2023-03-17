#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(int n,vector<int> arr){
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i != j) && ((arr[i]^arr[j])>arr[i]))
			  count++;
		}
	}
	return count;
}
int main()
{
ios;
int n;
cin >> n;
vector<int> arr(n);
int ans;
for(int i=0;i<n;i++)
  cin >> arr[i];
ans = solve(n,arr);
cout << ans << "\n";  
return 0;
}