#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[15];
	arr[0]=2;arr[1]=6;arr[2]=10;arr[3]=18;arr[4]=14;
	arr[5]=22;arr[6]=26;arr[7]=30;arr[8]=34;arr[9]=38;
	arr[10]=42;arr[11]=46;arr[12]=50;arr[13]=54;arr[14]=58;
	int a,b,c,flag=0;
	for(int i=0;i<15;i++){
		for(int j=i+1;j<15;j++){
			for(int k=j+1;k<15;k++){
				if((arr[i]+arr[j]+arr[k])==60){
					a=arr[i];
					b=arr[j];
					c=arr[k];
					flag=1;
					break;
				}
			}
		}
	}
	if(flag==1)
	  cout << a << " " << b << " " << c << endl;
	else
	  cout << "NOT FOUND" << endl;  
	return 0;
}
