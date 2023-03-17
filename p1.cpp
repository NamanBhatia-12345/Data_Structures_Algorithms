#include <bits/stdc++.h>
using namespace std;
int FindMultipleOf3InGroup(int arr[],int n){
	int sum,res=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum=arr[i]+arr[j];
			if(sum%3==0)
			res++;
	}
  }
  for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				sum=arr[i]+arr[j]+arr[j+1];
				if(sum%3==0)
				res++;
		   }
		}
	}
  return res;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	  cin >> arr[i];
	int ans=FindMultipleOf3InGroup(arr,n);
	cout << ans << "\n"; 
	return 0;
}
