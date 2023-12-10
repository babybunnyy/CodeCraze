#include <stdio.h>

// The hostel in which you stop for the night changes its prices according to the age of the customer and the weight of their luggage.
// this program that will easily allow you to know the price of one night.

int main(void){
	int age;
	int pounds;
	printf("Enter your age and how many pounds of luggage: ");
	scanf("%d %d",&age,&pounds);
	
	if (age == 60){
		printf("0\n");
	} else if (age <= 10){
		printf("5\n");
	} else if (!(age == 60 && age <= 10)){
		if(pounds <= 0){
			printf("30\n");
		}else{
			printf("40\n");
		}
	}

	return 0;

}
