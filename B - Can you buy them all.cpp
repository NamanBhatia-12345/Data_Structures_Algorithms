#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int n,x;
	cin >> n >> x;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	  cin >> arr[i];
	int sum=0;
	for(int i=1;i<=n;i++){
		if(i%2==0)
		  arr[i]--;
		sum+=arr[i];  
	}
	if(x>=sum)
	  cout << "Yes\n";
	else
	  cout << "No\n";    
	return 0;
}
