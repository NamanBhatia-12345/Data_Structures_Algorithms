#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
	int n;
	cin >> n;
	pair<int,string> p1[n],p2[n];
	for(int i=0;i<n;i++){
		cin >> p1[i].first >> p1[i].second;
	}
	for(int i=0;i<n;i++){
		p2[i].first=p1[i].first;
		p2[i].second=p1[i].second;
	}
	sort(p1,p1+n);
	for(int i=0;i<(n/2);i++){
		if(p1[i].second==p2[i].second)
		  cout << "-" << " ";
		else
		  cout << p1[i].second << " ";   
	}
	for(int i=(n/2);i<n;i++){
		cout << p1[i].second << " ";   
	}
	cout << "\n";
}
int main()
{
  ios;
  int t=1;
  //cin >> t;
  while(t--)
  solve();
  return 0;
}
