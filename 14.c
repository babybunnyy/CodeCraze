#include <stdio.h>
#include <stdbool.h>

// guess my number

int main(void){
        int n;
        scanf("%d",&n);
        int guess;
        int i = 0;
        bool notfound = true;
        while(notfound){
            i++;
                scanf("%d",&guess);
                if(guess < n){
                        printf("it is more\n");
                }else if (guess > n){
                        printf("it is less\n");
                }else{
                        printf("Number of tries needed\n%d",i);
                        notfound = false;
                }
                
        }
        return 0;
}

