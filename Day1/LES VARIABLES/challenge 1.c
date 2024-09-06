#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char nom[10], prenom [10],email[40], sexe[10];
	
	printf("saisir votre nom :");
	scanf("%s",&nom);
	printf("saisir votre prenom : ");
	scanf("%s",&prenom);
	printf("saisir votre email : ");
	scanf("%s",&email);
	printf("saisir votre sexe : ");
	scanf("%s",&sexe);
	 
printf("votre nom est : %s\n",nom);
printf("votre prenom est : %s\n",prenom);
printf("votre email est : %s\n",email);
printf("votre sexe est : %s\n",sexe);
	
	return 0;
}
