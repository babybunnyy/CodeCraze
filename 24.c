#include <stdio.h>

int sumOfDigits(int);

int main(void){
	int n;
	scanf("%d",&n);
	int o = sumOfDigits(n);
	printf("%d\n",o);
}

int sumOfDigits(int n){
	int sum = 0;
	while(n>0){
		int mod = n % 10; // splits last digit from number
		sum += mod;
		n /= 10; 
	}
	return sum;
}
