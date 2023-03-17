#include <stdio.h>
void main(){
	int a = 11, b = 22, c;
	c = a + b + a++ + b++ + ++a + ++b;
	printf("%d %d %d", a,b,c); 
}
