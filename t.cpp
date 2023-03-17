#include<bits/stdc++.h>
using namespace std;
int NumberOfSubstring(int N,vector<string> S){
	set<string> st;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < S[i].size(); j++) {
			string x = S[i].substr(0, j + 1);
			st.insert(x);
		}
	}
	for (auto it : st) {
		int cnt = 0;
		for (auto x : it) {
			if (x == 'b') cnt++;
		}
		if (cnt >= 2) ans = (ans + cnt - 1 ) % 1000000007;
	}
	return ans;
}
int main(){
	int n;
	cin >> n;
	vector<string> str(n);
	for(int i=0;i<n;i++)
	  cin >> str[i];
	int res;
	res = NumberOfSubstring(n,str);  
	cout << res << "\n";
}
