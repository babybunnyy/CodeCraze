#include <stdio.h>

// this program reads 10 integers the quantities needed for each of the ingredients, in order, and it stores them in an array.

int main(void){
        int qt[10],n;
        for(int i = 0; i < 10; i++){
                scanf("%d",&qt[i]);
        }
        scanf("%d",&n);
        printf("%d",qt[n]);
        return 0;
}
