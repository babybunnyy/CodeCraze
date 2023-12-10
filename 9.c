#include <stdio.h>

// The program facilitates planning for a meal by calculating the total cost of buying ingredients
// It begins by reading the number of ingredients (up to a maximum of 10) and, for each ingredient, the price per pound.

int main(void){
	int n; 
	scanf("%d",&n); 

	int i;
	double ingredient[10];
	for(i = 0; i < n; i++){
		scanf("%lf",&ingredient[i]);
	}
	
	double price[10];
	double cost = 0;
	for(i = 0; i < n; i++){
        	scanf("%lf",&price[i]);
        	cost += ingredient[i] * price[i];
	}
	
	printf("%.2lf\n",cost);

	return 0;
}
		

	

