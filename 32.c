#include <stdio.h>

// goal is to read a 68-word text from the input
// and then print it to the screen backwards.

int main(void){
        char text[68][100];
        for(int i=0;i<68;i++){
                scanf("%s",text[i]);
        }
        for(int i=67;i>=0;i--){
                printf("%s ",text[i]);
                }
}
