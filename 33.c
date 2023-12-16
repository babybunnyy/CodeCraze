#include <stdio.h>
#include <string.h>

//reverse reversed text with reversed letters

int main(void){
	char text[10][101];

	printf("enter your text with 10 letters max: ");
	for(int i=0;i<10;i++){
		scanf("%s",text[i]);
	}

	// print the rev words
	for(int i=9;i>=0;i--){
		int length = strlen(text[i]);

		for(int j=length-1;j>=0;j--){
			printf("%c", text[i][j]);
		}

		printf(" ");
	}
}
		

