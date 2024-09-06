#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N1,N2, S;
	printf("saisir le nombre de N1: " );
	scanf("%d",&N1);
	printf("saisir le nombre de N2: " );
	scanf("%d",&N2); 
   
	if(N1==N2){
		 S=(N1+N2)*3;
		printf("le triple de la somme de deux variable est : %d" ,S);	
	}
	
	else {
	
	 S=N1+N2;
	  printf("la somme est  egal :%d ",S);
	}
	
	
	
	
	
	return 0;
}
