#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int arr[n];
	int ans=1;
	for(int i=0;i<n;i++){
	   cin >> arr[i];
	   ans=ans*arr[i];
   }
   int x=ans;
   for(int i=0;i<n;i++){
   	  ans=ans/arr[i];
   	  cout << ans << "\n";
   	  ans=x;
   }   
	return 0;
}
