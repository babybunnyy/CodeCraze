#include <stdio.h>

// this program calculates your price to pay based on your arrival time.

int main(void){
	int a; // arrival time ( 0 to 12) 
	
	scanf("%d",&a);

	int cost = 10 + a*5; // 10 is the base price,
			     // 5 dollars are added for every hour after noon 

	if(cost < 53){ // the total is capped at 53 dollars
		printf("%d\n",cost);
	} else {
		printf("53\n");
	}

	return 0;
}
