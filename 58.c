#include <stdio.h>

/*  prints the minimum coins needed to make the given
    to make the given amount of change, in cents
    greedy algorithms : minimize numbers of coins due
*/

int main(void)
{
	int cents;
	do
	{
		printf("Change owed: ");
		scanf("%d",&cents);
	}while(cents < 0);

	int count = 0;

	while(cents >= 25)
	{
		cents -= 25;
		count++;
	}

	while(cents >= 10)
	{
		cents -= 10;
		count++;
	}

	while(cents >= 5)
	{
		cents -= 5;
		count++;
	}

	while(cents >= 1)
	{
		cents -= 1;
		count++;
	}

	printf("%d\n",count);
}


