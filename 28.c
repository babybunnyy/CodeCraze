#include <stdio.h>

//pointers and arrays

void reverseArray(int *);

int main(void){
	int array[6];
	for(int i=0;i<6;i++){
		scanf("%d",&array[i]);
	}
	reverseArray(array);
	 for(int i=0;i<6;i++){
                printf("%d ",array[i]);
        }
}

void reverseArray(int *array){
	int store = array[0];
	array[0] = array[5];
	array[5] = store;
	store = array[1];
	array[1] = array[4];
	array[4] = store;
	store = array[2];
	array[2] = array[3];
	array[3] = store;
}
	



