#include <stdio.h>

// displays on the screen a square of n x n stars, with the integer n given as an input.

int main(void){
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

