#include <bits/stdc++.h>
using namespace std;
int Solve(int N,int B,int G,vector<int> X,vector<int> Y){
	sort(X.begin(),X.end());
	sort(Y.begin(),Y.end());
	int res,sum1=0,sum2=0,count1=0,count2=0;
	for(int i=N-1;i>=0;i--){
		if(B>count1){
			count1+=X[i];
			sum1++;
		}
	}
	for(int i=N-1;i>=0;i--){
		if(G>count2){
			count2+=Y[i];
			sum2++;
		}
	}
	if(count1<B||count2<G)
	  return -1;
	res=max(sum1,sum2);
	return res;
}
int main(){
	int n,b,g;
	cin >> n >> b >> g;
	vector<int> x(n),y(n);
	for(int i=0;i<n;i++)
	  cin >> x[i];
	for(int i=0;i<n;i++)
	  cin >> y[i];
	int ans;
	ans=Solve(n,b,g,x,y);    
	cout << ans << endl;
	return 0;
}
