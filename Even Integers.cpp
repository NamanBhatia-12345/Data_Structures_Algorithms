#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> v1(n);
	for(int i=0;i<n;i++)
	  cin >> v1[i];
	int i=0,j=0; 
	while(j<n){
		if(v1[j]%2!=0){
			swap(v1[i],v1[j]);
			i++;
		}
		j++;
	}
	for(int k=0;k<i;k++)
	  cout << v1[k] << " ";
	cout << "\n";	
}
