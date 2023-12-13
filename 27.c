#include <stdio.h>

// initialising and modifying pointers

int main(void){
	int a = 2333;
	int *ptr1 = &a;
	int *ptr2 = &a;
	int *ptr3;
	int *ptr4;
	ptr3 = &a;
	ptr4 = &a;

	printf("(ptr1: %p)\n",ptr1);
	printf("(ptr2: %p)\n",ptr2);
	printf("(ptr3: %p)\n",ptr3);
	printf("(ptr4: %p)\n",ptr4);

	printf("\n");
	int b = 2332;
	ptr3 = &b;
	*ptr4 -= 1;
        printf("(ptr3: %p) - (%d)\n",ptr3,*ptr3);
        printf("(ptr4: %p) - (%d)\n",ptr4,*ptr4);	
}
