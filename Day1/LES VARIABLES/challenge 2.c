#include <stdio.h>
#include <stdlib.h>



int main() {
	float c, k;
	printf("saisir la temperateur en celuis :  ");
	scanf("%f",&c);

	k= c + 273.15  ;
	printf("la valeur de kelvin est : %.2f",k);
	
	return 0;
}
