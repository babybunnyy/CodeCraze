#include <stdio.h>

// repeat a word read from the user input

int main(void){
	int n;
	char word[50];
	scanf("%d %s",&n,word);
	for(int i=0;i<n;i++){
		printf("%s\n",word);
	}
	return 0;
}

