#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int solve(){
	string str;
	cin >> str;
	int n=str.size();
	if(n==1)
	 return 0;
	int vow=0,cons;
	for(int i=0;i<n;i++){
	if((str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
		vow++;
	} 
	cons=n-vow;
	int arr[26];
	for(int i=0;i<26;i++)
	  arr[i]=0;
	for(int i=0;i<n;i++)
		arr[str[i]-'A']++;
	int x1=0,x2=0;
	for(int i=0;i<26;i++){
		if((i==0)||(i==4)||(i==8)||(i==14)||(i==20))
		  x1=max(x1,arr[i]);
		else
		  continue;  
	}
	for(int i=0;i<26;i++){
	  if((i==0)||(i==4)||(i==8)||(i==14)||(i==20))
	    continue;
		else
		  x2=max(x2,arr[i]);  
	}
	int ans1,ans2,ans;
	ans1=cons+(vow-x1)*2;
	ans2=vow+(cons-x2)*2;
	ans=min(ans1,ans2);
	return ans;	
}
int main()
{
ios;
int t,result;
cin >> t;
for(int i=1;i<=t;i++){
result=solve();
cout << "Case #" << i << ": " << result << "\n";
}
return 0;
}
