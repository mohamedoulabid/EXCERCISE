#include <stdio.h>
#include <stdlib.h>
int produit (int A , int B ){

return A*B;
}
int main() {
	int A, B;
	printf(" saisir  la valeur de A :");
	scanf("%d",&A);
	printf(" saisir  la valeur de B :");
	scanf("%d",&B);
	
	printf("le produit est egal a :%d", produit(A,B));

	return 0;
}
