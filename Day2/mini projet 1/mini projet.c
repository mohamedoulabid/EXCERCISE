#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct  {

char titre[50];
char auteur [50];
float prix;
int quantite;

}livre;

livre p[100];
char supp[50];
char cherche[50];
int j;
int number_total=0;
int n=0;
int S=0;
int i;
int total_quantite;
void AjouteLivre(){
    	printf("titre de livre : ");
       	scanf("%s",p[i].titre);
       	printf("auteur de livre : ");
       	scanf("%s",p[i].auteur);
       	printf("prix de livre : ");
       	scanf("%f",&p[i].prix);
       	printf("quantite de livre : ");
       	scanf("%d",&p[i].quantite);
     	S=S+p[number_total].quantite;
       	i++;
       	number_total++;
}
void AfficheLivres(){

  for (i=0;i<number_total;i++){
        printf("le livre numero %d :  \n",i+1);
        printf("titre  est : %s\n",p[i].titre);
	    printf("auteur  est : %s\n",p[i].auteur);
        printf("Prix est : %.2f\n", p[i].prix);
	    printf("quantite  est : %.2d\n",p[i].quantite);

    }
		}
void  RechercheLivres(){
        printf("entrer le livre qui tu cherche: ");
        scanf("%s",&cherche);

		     for (i=0;i<number_total;i++){
        	if(strcmp(p[i].titre,cherche)==0)
        	printf("titre: %s  prix: %2.f quantite: %d auteur: %s\n", p[i].titre, p[i].prix,p[i].quantite,p[i].auteur);
        }
}
void  ModifierLivres(){
 for (i=0;i<number_total;i++){
        	if(strcasecmp(p[i].titre,cherche)==0){
            printf("entrer la nouvelle quantite: ");
            scanf("%d",&p[i].quantite);
			}
			else
			printf("livre non trouvee ");
}
}
void SupprimerLivres(){
    printf("Saisir le titre du livre à supprimer: ");
    scanf(" %s", supp);
    for (i = 0; i < number_total; i++) {
        if (strcmp(p[i].titre, supp) == 0) {
            for (j = i; j < number_total - 1; j++) {
                p[j] = p[j + 1];
            }
            number_total--;
}
		}
		}

void totallivres (){
    total_quantite = 0;
 for (i = 0; i < number_total; i++) {
     total_quantite = total_quantite + p[i].quantite;
}
printf("total quantite est :%d ",total_quantite);
}

int main() {
	int choix;
	do {
printf("--------------------------------------------------------------\n");
printf("saisir 0 pour afficher le menu\n :");
printf("entrer 1 pour ajouter un livre au stock.\n ");
printf("entrer 2 pour Afficher tous les livres disponibles.\n ");
printf("entrer 3 pour Rechercher un livre par son titre .\n ");
printf("entrer 4 pour Mettre a jour la quantite d'un livre.\n");
printf("entrer 5 pour Supprimer un livre du stock .\n ");
printf("entrer 6 pour Afficher le nombre total de livres en stock.\n ");
printf("entrer 7 pour sortir.\n");
	printf("--------------------------------------------\n");
printf("saisir votre choix : ");
scanf("%d",&choix);

switch (choix){

        case 1:

       	printf("-----------------------------------------------------\n");
        AjouteLivre();
       	printf("-------------------------------------------------------\n");

			break;

        case 2:
        printf("-------------------------------------------------------\n");
		printf("les details de livre : \n");
		printf("-------------------------------------------------------\n");
		AfficheLivres();

				break;
        case 3:
        printf("-------------------------------------------------------\n");
        printf("le titre de livre qui tu cherche : \n");
        RechercheLivres();

        printf("-------------------------------------------------------\n");

        	break;
        case 4:
        printf("-------------------------------------------------------\n");
        printf("entrer le titre de livre a modifier : ");
        scanf("%s",cherche);
        ModifierLivres();
        printf("-------------------------------------------------------\n");
		break;

		  case 5:
        printf("-------------------------------------------------------\n");

        SupprimerLivres();
        printf("-------------------------------------------------------\n");

break;

          case 6:
        printf("-------------------------------------------------------\n");
        totallivres ();
        printf("-------------------------------------------------------\n");

                break;
           case 7:
                printf("-------------------------------------------------------\n");
                printf("Sortie du programme.\n");
                break;

}
}	while (choix != 7);

return 0;
}
