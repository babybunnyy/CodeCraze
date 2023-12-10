#include <stdio.h>

/* The program is designed to verify the cost of crossing a bridge determined by rolling two dice.
 * The user inputs two integers representing the values of the dice.
 * If the sum is 10 or greater, a fixed special fee of 36 coins is charged.
 * Otherwise, the user pays twice the sum of the dice values.
 */

int main(void){
	int x,y; // values of the dice
	
	scanf("%d %d",&x,&y);

	int sum = x+y;

	if(sum >= 10){
		printf("Special tax: 36\n");
	}else {
		printf("Regular tax: %d\n",sum*2);
	}

	return 0;
}
