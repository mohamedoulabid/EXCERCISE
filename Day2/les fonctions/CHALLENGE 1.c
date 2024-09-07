#include <stdio.h>
#include <stdlib.h>
int somme (int A, int B){

	return A+B;
}

int main() {
	int A,B; 
	printf("saisir la vamleur de A : ");
	scanf ("%d",&A);
	printf("saisir la vamleur de B : ");
	scanf ("%d",&B);
	printf ("la somme est: %d",somme(A,B));

	
	
	
	return 0;
}
