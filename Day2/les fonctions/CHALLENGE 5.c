#include <stdio.h>
#include <stdlib.h>
int factorielle (int A){
	int i ,n;
	n=1;
	for (i=1;
	i<=A;i++){
		n= n * i;
		
	}
	return n;
}

int main() {
	int A; 
	printf("saisir la valeur de A : ");
	scanf ("%d",&A);
	
	printf ("%d",factorielle (A));
	
	
	
	
	
	
	
	
	
	return 0;
}
