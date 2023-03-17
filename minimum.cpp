#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	  cin >> arr[i];
	int mi=INT_MAX;
	for(int i=0;i<n;i++){
		mi=min(mi,arr[i]);
	}  
	cout << m1 << "\n";
}
