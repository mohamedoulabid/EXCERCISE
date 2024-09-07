#include <stdio.h>
#include <stdlib.h>
int fibannoci(int k ){
	int a=-1, b=1, c, i=0;
	while (i<=k){
		c=a+b;
		a=b;
		b=c; 
	i++;	
	}
	
	return c;
}
int main() {
	printf("enter the number : ");
	int n;
	scanf("%d",&n);
	 printf("%d",fibannoci(n));
}
