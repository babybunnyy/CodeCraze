#include <stdio.h>

// compute budget using a while loop

int main(void){
	int val;
	scanf("%d",&val);
	int budget = val + 1;
	while(val != -1){
		scanf("%d",&val);
		budget += val;
	}
	printf("your budget is : %d",budget);
	return 0;
}
