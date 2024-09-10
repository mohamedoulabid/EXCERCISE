#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct  {

char nom[50];
char email [50];
char telephone[50];


}contact;

contact p[100];
char supp[50];
char cherche[50];
int j;
int number_total=0;
int n=0;
int S=0;
int i;
int total_contact;
void AjouteContact (){
    	printf("le nom de contact  : ");
       	scanf("%s",p[number_total].nom);
       	printf("le numero de telephone : ");
       	scanf("%s",p[number_total].telephone);
       	printf("adresse email : ");
       	scanf("%s",p[number_total].email);

       	number_total++;
}
void  ModifierContact(){
    printf("saisir le nom de contact qui chercher : ");
    scanf("%s",&cherche );
 for (i=0;i<number_total;i++){
        	if(strcasecmp(p[i].nom,cherche)==0){
            printf("entrer la nouvelle numero : ");
            scanf("%s",&p[i].telephone);
            printf("entrer la nouvelle email : ");
            scanf("%s",&p[i].email);

            return;
}
}

    printf("contact non trouvee ");


}
void SupprimerContact(){
    printf("Saisir le nom de contact  à supprimer: ");
    scanf(" %s", supp);
    for (i = 0; i < number_total; i++) {
        if (strcmp(p[i].nom, supp) == 0) {
            for (j = i; j < number_total - 1; j++) {
                p[j] = p[j + 1];
            }
            number_total--;
}
		}
		}
void AfficheContact(){

  for (i=0;i<number_total;i++){
        printf("le contact numero : %d   \n",i+1);
        printf("le nom  est : %s\n",p[i].nom);
	    printf("le numero de telephone  est : %s\n",p[i].telephone);
        printf(" email est : %s\n\n\n", p[i].email);
        }
		}
void  RechercheContact(){
        printf("entrer le contact qui tu cherche: ");
        scanf("%s",&cherche);

		     for (i=0;i<number_total;i++){
        	if(strcmp(p[i].nom,cherche)==0)
        	printf("nom: %s  telephone: %s email: %s\n", p[i].nom, p[i].telephone,p[i].email);}
}

int main() {
	int choix;
	do {
printf("--------------------------------------------------------------\n");
printf("1-jouter le contact.\n ");
printf("2-Modifier le contact.\n ");
printf("3-supprimer le contact par son nom .\n ");
printf("4-Afficher tous les contact.\n");
printf("5-Recherche un contact .\n ");
printf("6- sortir.\n");
printf("--------------------------------------------------------------\n");
printf("saisir votre choix : ");
scanf("%d",&choix);

switch (choix){

        case 1:

printf("--------------------------------------------------------------\n");
        AjouteContact ();
printf("--------------------------------------------------------------\n");
        break;

        case 2:
printf("--------------------------------------------------------------\n");
		printf("les details de contact : \n");
		ModifierContact();
printf("--------------------------------------------------------------\n");
         break;

        case 3:
printf("--------------------------------------------------------------\n");
        printf("le nom de titre  qui tu cherche : \n");
        SupprimerContact();
printf("--------------------------------------------------------------\n");
         break;

        case 4:
printf("--------------------------------------------------------------\n");
        printf("la liste de contact : \n");
        AfficheContact();
printf("--------------------------------------------------------------\n");
		 break;

		  case 5:
printf("--------------------------------------------------------------\n");

       RechercheContact();
printf("--------------------------------------------------------------\n");
         break;

           case 6:
printf("--------------------------------------------------------------\n");
                printf("Sortie du programme.\n");
         break;

}
}	while (choix != 6);

return 0;
}
