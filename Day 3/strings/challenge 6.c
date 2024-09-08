#include <stdio.h>
#include <stdlib.h>


int main() {
	 char a [100];
	
	 printf ("saisir la chaine de caractere :");
	 scanf ("%s",&a);
	 
	printf("%s",strupr(a));
	return 0;
}
