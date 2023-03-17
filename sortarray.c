#include <stdio.h>
int* sortarray(int len,int* arr){
	int i=0,j=0,temp=0;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			 if(arr[i]>arr[j]){
			 	temp=arr[i];
			 	arr[i]=arr[j];
			 	arr[j]=temp;
			 }
		}
	}
	return arr;
}
int maxelement(int len1,int* arr1,int len2,int* arr2){
	int *p1,*p2;
	p1 = sortarray(len1,&arr1);
	p2 = sortarray(len2,&arr2);
	int ans1=*(p1+(len1-1)),ans2=*(p2+(len2-1)),ans;
	if(ans1>=ans2)
	  ans = ans1;
	else
	  ans = ans2;
	return ans;    
}
int main(){
	int len1,len2;
	scanf("%d %d",&len1,&len2);
	int arr1[len1],arr2[len2];
	int i=0;
	for(i=0;i<len1;i++)
	  scanf("%d ",&arr1[i]);
	for(i=0;i<len2;i++)
	  scanf("%d ",&arr2[i]);  
	int ans;
	ans=maxelement(len1,&arr1,len2,&arr2);
	printf("%d\n",ans);
	return 0;
}
