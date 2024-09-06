#include <stdio.h>
#include <stdlib.h>

int main() {
	int  C;
	printf("entrer le temperature en celsius : ");
	scanf ("%d",&C);
	
	if (C<0){
		printf("etat est : Solide ");
	}
	
	if(C>=0&& C<100 ){
		printf("etat est : Liquide ");
	}
	
	if(C>100){
		printf("etat est : Gaz ");
	}
	
	return 0;
}
