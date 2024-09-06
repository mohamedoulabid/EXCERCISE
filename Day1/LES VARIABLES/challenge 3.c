#include <stdio.h>
#include <stdlib.h>


int main() {
 
	float distance_en_kilometre, distance_en_yard;
	
	printf("saisir la valeur de la distance en kilometre : ");
	scanf("%f",&distance_en_kilometre);
	
	distance_en_yard= distance_en_kilometre * 1093.61;
	
	printf("la valeur de la distance en yard est : %.2f ",distance_en_yard);
	
	
	
	
	
	
	
	return 0;
}

