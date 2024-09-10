#include <stdio.h>
#include <stdlib.h>
struct etudient {
	char nom [20], prenom [20];
	int note;
	
};


int main() {
	struct etudient p[0];
	printf("saisir le nom d'etudient: ");
	scanf("%s",&p[0].nom);
	printf("saisir le prenomd'etudient: ");
	scanf("%s",&p[0].prenom);
	printf("saisir la note : ");
	scanf("%d",&p[0].note);
	
	printf("le nom d'etudient est :%s\n",p[0].nom);
	printf("le prenom d'etudient est :%s\n",p[0].prenom);
    printf("la note d'etudient est :%d\n",p[0].note);

	
	return 0;
}
