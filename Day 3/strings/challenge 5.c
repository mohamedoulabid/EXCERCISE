#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char a[100];
	
	printf ("saisir chaine de caractere : ");
	scanf ("%s",a);	
	int k =strlen(a)-1;
	int i ;
	for ( i = 0 ; i<= k/2;i++){
		char temp = a[i];
		a[i] = a[k];
		a[k]= temp;
		k--;	
	}
	printf("%s",a);
	return 0;
}
