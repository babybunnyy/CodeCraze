#include <stdio.h>

int main(void){
	int array1[10] = {1,1};
        int array2[10] = {2,2};
	int *array[] = {array1,array2};
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){// j<3 to see how it will print out'\0'
			printf("%d\n",array[i][j]);
		}
	}
	array[0][0] = 11;
	array[0][1] = 11;
	printf("%d %d\n",array[0][0],array[0][1]);

	*array[1] = 22; // or you can write it like array[1][0]
	array[1][1] = 22;
	printf("%d %d\n",array[1][0],array[1][1]);

	int array3[10] = {3,3};
// Assign the address of array3 to the next element in array of pointers
	array[2] = array3;
	printf("%d %d\n",array[2][0],array[2][1]);
	array[2][0] = 33;
	array[2][1] = 33;
	printf("%d %d\n",array[2][0],array[2][1]);

}
