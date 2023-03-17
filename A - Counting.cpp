#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int a,b;
	cin >> a >> b;
	int res=b-a;
	if(res<0)
	  cout << "0\n";
	else{
		res++;
		cout << res << "\n";
	}  
	return 0;
}
