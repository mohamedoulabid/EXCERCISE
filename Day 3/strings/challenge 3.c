#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char c[10];
	char d [10];
	printf("saisir la premiere chaine :");
	scanf(" %s",&c);
	printf("saisir la premiere chaine :");
	scanf(" %s",&d);
	printf("%s",strcat(c,d));
	
	
	
	
	
	return 0;
}
