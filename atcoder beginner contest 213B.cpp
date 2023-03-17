#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],arr[n];
	for(int i=0;i<n;i++)
	  cin >> arr[i];
	for(int i=0;i<n;i++)
	  a[i]=arr[i];
	sort(arr,arr+n);
	int ans=arr[n-2];
	for(int i=0;i<n;i++){
		if(a[i]==ans){
			cout << i+1 << "\n";
			break;
		}
	}    
	return 0;
}
