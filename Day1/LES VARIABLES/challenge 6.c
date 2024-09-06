#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int N1=12,N2=10,S,DF,P,DV;
	
	S=N1+N2;
	DF=N1-N2;
	P=N1*N2;
	DV=N1/N2;
	
	printf("la somme est egale : %.2d \n",S);
	printf("la difference est egale : %.2d \n",DF);
	printf("le produit est egale : %.2d \n",P);
	printf("la division est egale : %.2d \n",DV);
	
	return 0;
}
