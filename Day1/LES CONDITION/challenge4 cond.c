#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float A, B, C, D, x, X1, X2;
	printf("saisir la valeur de A: ");
	scanf("%f",&A);
	printf("saisir la valeur de B: ");
	scanf("%f",&B);
	printf("saisir la valeur de C: ");
	scanf("%f",&C);
	D= (B*2)-(4*A*C); 
	if(D<0)
	printf("pas de solutions reels");
	else if(D==0){
		X1=-B/(2*A);
		printf(" la solution est: %.2f", X1);
	}
	else{
	
	X1=(-B-sqrt(D))/(2*A);
	X2=(-B+sqrt(D))/(2*A);
	printf(" la solution 1 est: %.2f\n", X1);
	printf(" la solution 2 est: %.2f", X2);
}
	
	return 0;
}
