#include<bits/stdc++.h>
using namespace std;
int main(){
      int n,m;
	  cin >> n >> m;
	  int arr1[n+m];
	  for(int i=0;i<n+m;i++)
	    cin >> arr1[i];
	  int arr2[m];
	  for(int i=0;i<m;i++){
	  	  cin >> arr2[m];
	  }
	  int k1=0;
	  for(int i=n;i<n-m;i++)
	    arr1[i]=arr2[k1++];
	  sort(arr1,arr1+n+m);	
	  for(int i=0;i<n+m;i++)
	    cout << arr1[i] << " ";		
}
