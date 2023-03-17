#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m,x;
	cin>>n>>m>>x;
	vector<vector<long long int>>grid(n,vector<long long int>(m,-1));
	for(int i=0;i<x;i++){
	    int l,k;
	    cin>>l>>k;
	    grid[l-1][k-1]=0;
	}
	for(int i=0;i<n;i++){
	   if(grid[i][0]==0){
	       while(i<n){
	           grid[i][0]=0;
	           i++;
	       }
	       break;
	   }
	   else grid[i][0]=1;
	}
	for(int i=0;i<m;i++){
	   if(grid[0][i]==0){
	       while(i<m){
	           grid[0][i]=0;
	           i++;
	       }
	       break;
	   }
	   else grid[0][i]=1;
	}
	for(int i=1;i<n;i++){
	    for(int j=1;j<m;j++){
	       if(grid[i][j]!=0) grid[i][j] = (grid[i-1][j]%1000000007+grid[i][j-1]%1000000007)%1000000007;
	    }
	}
	cout<<grid[n-1][m-1]<<endl;
	return 0;
}