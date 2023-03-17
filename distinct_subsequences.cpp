#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(long i=a;i<b;i++)
#define mod 1000000007
int n;
 
int main(){
string s;
cin>>s;
n=s.length();
int dp[n+2][n+2];
memset(dp,0,sizeof(dp));
vector<int> last(256,-1);

dp[0][0]=1;

FOR(i,0,n+1){
	FOR(j,i+1,n+1){
		dp[i][j]=0;
	}
}

FOR(i,1,n+1){
	FOR(j,0,n+1){
		dp[i][j]+=dp[i-1][j];
		if(j>=1){
			dp[i][j]+=(dp[i-1][j-1])% mod; 
			if(last[s[i-1]]!=-1){
				dp[i][j]-=(dp[last[s[i-1]]][j-1])%mod;
			}
			}

	}
	last[s[i-1]]=i-1;
}


cout<<dp[n][n-2]<<"\n";

return 0;}