#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int n,i;

printf("saisir un nombre : ");
scanf("%d",&n);

int S;
S=0;

for(i=0;i<n;i++)
	S=S+(i+1);
		

printf("%d",S);

	return 0;
} 
