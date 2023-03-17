#include <bits/stdc++.h>
using namespace std;
int Solve(int N,vector<int> A){
	int neg=0;
	for(int i=0;i<N;i++){
		if(A[i]<0)
		  neg++;
	}
	sort(A.begin(),A.end());
	int res=1,count=0;
	int m=1000000007;
	if(neg==0||neg==1){
	for(int i=N-1;i>=0;i--){
		if(A[i]>1){
			res=((res%m)*(A[i]%m))%m;
			count++;
		}	  
	}
   }
   else{
   	   if(neg%2==0){
   	   for(int i=0;i<neg;i++)	
   	   res=((res%m)*(A[i]%m))%m;
   	   count++;
	   }
	   else{
	   for(int i=0;i<neg-1;i++)	
   	   res=((res%m)*(A[i]%m))%m;
   	   count++;
	   }
	   for(int i=N-1;i>=0;i--){
		if(A[i]>1){
			res=((res%m)*(A[i]%m))%m;
			count++;
		}	  
	}  
   }
	res=((res%m)*(count%m))%m;
	res=res%m;
	return res;
}
int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(int i=0;i<N;i++)
	  cin >> A[i];
	int ans;
	ans=Solve(N,A);    
	cout << ans << endl;
	return 0;
}
