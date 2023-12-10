#include <stdio.h>

// this program gives you the name of the tree based on its characteristics

int main(void){
	int meters,leaves;
	scanf("%d %d",&meters,&leaves);

	if(meters <= 5 && leaves >= 8){
		printf("Tinuviel\n");
	} else if (meters >= 10 && leaves >= 10){
		printf("Calaelen\n");
	} else if (meters <= 8 && leaves <= 5){
		printf("Falarion\n");
	} else if (meters >= 12 && leaves <= 7){
		printf("Dorthonion\n");
	} else {
		printf("Uncertain\n");
	}

	return 0;
}
