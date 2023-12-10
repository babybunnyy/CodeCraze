#include <stdio.h>

// determines which team has an advantage based on greater total weight.

int main(void){

	int w1,w2; // weight of team 1 & 2
	int totalw1 = 0;
	int totalw2 = 0;
	int n; // number of players in a team
	
	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		scanf("%d",&w1);
		totalw1 += w1;
		scanf("%d",&w2);
		totalw2 += w2;
	}

	if(totalw1 > totalw2){
		printf("Team 1 has an advantage\n");
	} else {
		printf("Team 2 has an advantage\n");
	}

	printf("Total weight for team 1: %d\n",totalw1);
	printf("Total weight for team 2: %d\n",totalw2);

	return 0;
}
