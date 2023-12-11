#include <stdio.h>

// even or odd number of letters in a word?

int main(void){
	char string[101];
	printf("Please enter a word: ");
	scanf("%s",string);

	int i = 0;
	while(string[i] != '\0'){
		i++;
	}
	if(i % 2){
		printf("even\n");
	}else {
		printf("odd\n");
	}
	return 0;
}

	
