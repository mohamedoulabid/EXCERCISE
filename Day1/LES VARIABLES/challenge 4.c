#include <stdio.h>
#include <stdlib.h>

int main() {
	float la_vitesse_par_kilometre, la_vitesse_par_metres;
	
	printf("donner la valeur de la distance par km : ");
	scanf("%f",&la_vitesse_par_kilometre);
	
    la_vitesse_par_metres = la_vitesse_par_kilometre * 0.27778;
    
	printf("la valeur de la vitesse par metre est: %.2f",la_vitesse_par_metres);
	
	return 0;
}
