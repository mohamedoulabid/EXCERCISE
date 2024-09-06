#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
int i, n, max;
printf("saisir le nombre  element:");
scanf("%d",&n);
int T[n];
for (i=0;i<n;i++){

printf("saisir le nombre element:\n");
scanf("%d",&T[i]);}
for (i=0;i<n;i++){

if(i==0){

max=T[i];}
if (max<T[i])
max=T[i];
}
printf("le maximun est :%d\n", max);
	

	return 0;
}
