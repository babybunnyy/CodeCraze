#include <stdio.h>

int main(void)
{
	int cents;
	do
	{
		printf("Change owed: ");
		scanf("%d",&cents);
	}while(cents < 0);

	int quarter = 0, dime = 0, nickel = 0, penny = 0;

	quarter = cents / 25;
	cents %= 25;

	dime = cents / 10;
	cents %= 10;

	nickel = cents / 5;
	cents %= 5;

	penny = cents;

	int num_of_coins = quarter + dime + nickel + penny;

	printf("%d\n",num_of_coins);
}
