#include <stdio.h>

/* The program reads an integer representing the total population of an area. 
 * Assuming one person is infected on day 1.
 * Each infected person contaminates two new people every day.
 * the program calculates the day on which the entire population of the area will be infected.
 */

int main(void){
	int population;
	scanf("%d",&population);
	int howmany = 1;
	int infected = 1;
	while (infected < population){
		howmany++;
		infected *= 3;
	}

	printf("%d",howmany);
	return 0;
}
