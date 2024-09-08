#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char a[50];
	int c=0;
	printf("saisir le chaine de caractere :");
	scanf("%s",&a);
	while(c<=20){
	if (a[c]=='\0')
		break;
		c++;
	
}
printf("la longeur de la chaine est :%d",c);
	
	return 0;
}
