#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int n, i;
	printf(" le nombre d'?l?ments :");
	scanf("%d",&n);
	int T[n];
	for (i=0;i<n;i++){
		printf("T[%d]= ",i+1);
		scanf("%d",&T[i]);
	}
	for (i=0;i<n;i++){
	  printf("%d\n",T[i]);
	}
	return 0;
}
