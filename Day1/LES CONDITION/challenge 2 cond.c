#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char voyelle;
	printf("saisir un caractere : ");
	scanf("%c",&voyelle);
	switch(voyelle) {
		case 'A' : printf("est un voyellle");
			break;
		case 'E' : printf("est un voyellle");
			break;
		case 'Y' : printf("est un voyellle");
			break;
		case 'U': printf("est un voyellle");
			break;
		case 'I' : printf("est un voyellle");
			break;
		case'O' : printf("est un voyellle");
			break;
		default:
		    printf("pas un voyelle");
			break;
			
	}
	return 0;
}
