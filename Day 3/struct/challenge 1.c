#include <stdio.h>
#include <stdlib.h>
struct personne {
	char nom[20];
	char prenom [20];
	int age;
};


int main() {
//	int age;
//	char nom;
//	char prenom;
struct personne p;

	printf("saisir le nom de personne: ");
	scanf("%s",&p.nom);
	printf("saisir le prenom de personne: ");
	scanf("%s",&p.prenom);
	printf("saisir le age de personne: ");
	scanf("%d",&p.age);
	printf(" le nom est :%s\n le prenom est:%s\n age est: %d\n",p.nom,p.prenom,p.age);
	
	
	
	return 0;
}
