#include <stdio.h>

// this program determines the number of cities in a given region that have a population strictly greater than 10,000.

int main(void){
	int n; // number of cities
	scanf("%d",&n);

	int i;
	int j = 0;
	int city;

	for(i=0;i<n;i++){
		scanf("%d",&city);
		if (city > 10000){
			j++;
		}
	}

	printf("%d\n",j);
	return 0;
}
