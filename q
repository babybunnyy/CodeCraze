#include <stdio.h>

int main(void){
	int array1[10] = {0,1};
        int array2[10] = {2,3};
	int *array[] = {array1,array2};
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d\n",array[i][j]);
		}
	}
	*array[0] = 11;
	array[0][1] = 11;
	printf("%d %d",array[0][0],array[0][1]);
}
