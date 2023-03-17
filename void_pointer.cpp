#include <stdio.h>
int main(){
	void *p;
	int arr[] = {2,3,45,6};
	p =  &arr[0];
	printf("%d\n" ,(int)*p);
	return 0;
}
