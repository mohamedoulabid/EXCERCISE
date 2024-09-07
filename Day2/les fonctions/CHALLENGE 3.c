#include <stdio.h>
#include <stdlib.h>
int maximun(int A , int B ){
	return A>B ? A : B;
}

int main() {
int A, B; 
printf("saisir la valeur de A : ");
scanf ("%d",&A);
printf("saisir la valeur de B : ");
scanf ("%d",&B);
printf(" le maximun est :%d",maximun(A,B));








	return 0;
}
