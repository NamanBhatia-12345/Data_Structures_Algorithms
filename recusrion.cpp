#include <bits/stdc++.h>
using namespace std;


void print_pattern(int n){
	if(n==1){
		cout << "1\n";
		return;
	}
	for(int i=1;i<=n;++i)
	  cout << i << " ";
	cout << "\n";    
	print_pattern(n-1);  
	for(int i=1;i<=n;++i)
	  cout << i << " ";
	cout << "\n";  
//	if(n==0)
//	  return;
//	print_pattern(n-1);
}


int main(){
	print_pattern(5);
}
