#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("saisir la factorielle : ");
	scanf("%d",&n);
	int i,f;
	f=1;
    for (i=0;i<n;i++){
    	f= f*(i+1);
	}
    	printf("%d",f);

	

	
	
	
	
	
	
	
	
	
	
	return 0;
}
