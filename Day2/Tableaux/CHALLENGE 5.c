#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n, min;
	printf("saisir un nombre:");
	scanf("%d",&n);
	int T[n];
	for(i=0;i<n;i++){
	printf("saisir le nombre :\n");
	scanf("%d",&T[i]);	
	if(i==0)
	min=T[i];
	if(min>T[i])
    min=T[i];
}
printf("le minimun est:%d",min);

	return 0;
}
