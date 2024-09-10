#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct livre {
	char titre[20], auteur[20];
	int annee;
};
struct livre R(){
 struct livre B;
	 
 return B;
};
int main() {
	struct livre B;
	
	printf("saisir le titre de livre : ");
	scanf ("%s",&B.titre);
	printf("saisir l'auteur de livre : ");
	scanf ("%s",&B.auteur);
	printf("saisir l'annee de livre : ");
	scanf ("%d",&B.annee);
	
    printf("le titre de livre est:%s\n",B.titre );
    printf("l'auteur de livre est:%s\n",B.auteur);
    printf("l'annee de livre est:%d\n",B.annee);

	
	
	
	
	
	
	
	return 0;
}
