#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i;
	printf("saisir un nombre : ");
	scanf("%d",&n);
	int g;
	for(i=0;i<10;i++)
{
		g=n*(i+1);
    printf("%d * %d = %d \n",n,i+1,g);
 
}
	
	
	
	
	
	
	return 0;
}
