#include <stdio.h>
// The program is designed to assist in redistributing the weight of a rail convoy of goods.

int main(void){
	int n; // number of cars to be weighed
	double boxcars[50]; // the limit is 50 for the boxcars
	double totalweight = 0;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%lf",&boxcars[i]);
		totalweight += boxcars[i];
	}

	double distr = totalweight / n;
	for(int i = 0; i < n; i++){
		boxcars[i] = distr - boxcars[i];
		printf("%.2lf\n",boxcars[i]);
	}

	return 0;
}


