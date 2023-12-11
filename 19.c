#include <stdio.h>

// find the longest word in a text

int main(void){
        int n; // number of words in the text
        printf("enter number of words: ");
        scanf("%d",&n);

        int i;
        char word[50];
        int longest = 0;
        int k = 0;
        int index;
        for(i=0;i<n;i++){
                scanf("%s",word);
                index = 0;
                while(word[index] != '\0'){
                index++;
        }
                if(longest < index){
                        longest = index;
                }
                k++;
        }
        printf("the length of the longest word in your text is : %d\n",longest);
}
