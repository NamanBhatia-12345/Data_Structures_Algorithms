#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n;
	int a1[n];
	for(int i=0;i<n;i++)
	  cin >> a1[i];
	long long res=1;
	for(int i=0;i<n;i++){
		res=res*a1[i];
	}      
	for(int i=0;i<n;i++){
		a1[i]=res/a1[i];
	}
	for(int i=0;i<n;i++){
		cout << a1[i] << " "; 
	}
	cout << "\n";	
}
