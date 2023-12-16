#include <stdio.h>

// calculates and prints the difference between the highest score and each player's score

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    printf("enter number of players: ");
    scanf("%d", &N);
    printf("enter now the score of each player: ");
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int * array,int n){
	// find the biggest number in the array first 
	int biggest = array[0];
	for(int i=0;i<n;i++){
		if(biggest < array[i]){
			biggest = array[i];
		}
	}
	for(int i=0;i<n;i++){
		array[i] = biggest - array[i];
	}
}
