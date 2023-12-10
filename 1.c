#include <stdio.h>

// The program calculates the cost for a car trip shared on a carpooling website

int main(void){
	int n; // number of passengers
	double gas; // cost of gas
	
	scanf("%d %lf",&n,&gas);

	if(n == 0){
		printf("%.2lf\n",gas);
	} else {
		printf("%.2lf\n",(gas+1)/(n+1));
	}

	return 0;

}

