#include <stdio.h>
#include <stdlib.h>


int main() {
	int	n,i,F;
printf("saisir un nombre :");
scanf ("%d", &n);
int T[n];

for (i=0;i<n;i++){
	printf("saisir le nombre  %d :", i+1);
	scanf("%d",&T[i]);
}


	F=3;
	
for (i = 0 ; i < n ; i++){
	printf("3 * %d = %d \n", T[i], 3 * T[i] );
}

	return 0;
}
