#include <stdio.h>

int main(void)
{
	char c;
	scanf("%c",&c);
	int d;
	scanf("%d",&d);
	for(int i = 0; i < d; i++)
	{
		for(int j = i; j < d; j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	for(int i = d-1; i >= 0; i--)
	{
		for(int j = i; j < d; j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}
