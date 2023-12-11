#include <stdio.h>
#include <stdbool.h>
// search for a letter in a word

int main(void){
	int index = 0;
	char word[50];
	printf("Enter a word: ");
	scanf("%s",word);
	char letter; 
	printf("letter to search for : ");
	scanf(" %c",&letter);
	bool found = false;
	while(word[index] != '\0'){
		if (word[index] == letter){
			found = true;
			break;
		}
		index++;
	}	
	if(found){
		printf("found\n");
	}else{
		printf("not found\n");
	}
}	
