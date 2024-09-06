#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int i,n, s;
	
    printf("saisir le nombre des element:");
    scanf("%d",&n);
    int T[n];
    s=0;
	for(i=0;i<n;i++ ){ 
	printf("saisir le nombre : \n");
	scanf("%d", &T[i]);	
	s=s+T[i];}
	printf("%d",s);
	
	
	
	

	
	
	

	return 0;
}
