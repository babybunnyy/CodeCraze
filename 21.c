#include <stdio.h>

// find repeated letters in a word

int main(void){
	char word[50];
	printf("Enter a big big big word : ");
	scanf("%s",word);
	int index=0;
	while(word[index]!='\0'){
		index++;
	}
	int i,j;
	char letter;
	for(i=0;i<index;i++){
		for(j=0;j<index;j++){
			if(word[j]<word[j+1]){
				letter = word[j];
				word[j] = word[j+1];
				word[j+1] = letter;
			}
		}
	}
	int k = 0;
	for(i=0;i<index;i++){
		if(word[i] == word[i+1] && word[i] != word[i-1]){
			k++;
		}
	}
	if(k == 0){
		printf("surprisingly there are no repeated letters in your word\n");
	}else{
		printf("oop! the number of repeaters letters are : %d\nyou're welcome\n",k);
	}
	
	return 0;	
}
