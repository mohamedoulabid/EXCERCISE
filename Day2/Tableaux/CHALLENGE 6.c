#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,moyenne,somme;
	printf("saisir le nombre :");
	scanf("%d", &n);
	int T[n];
	somme=0;
	for (i=0;i<n;i++){
	printf("saisir le nombe:\n ");
	scanf ("%d",&T[i])	;	
	somme=somme+T[i];
		}
	moyenne=somme/n;
	printf("la moyenne est:%d",moyenne);
	
	
	
	return 0;
}
