#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int ans=0;
	while(1){
		if((a^ans)==b){
			cout << ans << "\n";
			break;
		}
		ans++;
	}
	return 0;
}
