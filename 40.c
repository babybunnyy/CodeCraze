#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
	struct point * next;
};
struct point * createstruct(int, int);
void print(struct point *);
int main(void){
	struct point * iptr;
	int a = 1; 
	int b = 2;
	
	iptr = createstruct(a,b);
	print(iptr);
	free(iptr);
}
struct point * createstruct(int a, int b){
	struct point *ptr;
	ptr = (struct point *) malloc(sizeof(struct point));
	ptr->x = a;
	ptr->y = b;
	ptr->next = NULL;
	return ptr;
}

void print(struct point *start){
	struct point *ptr;
	ptr = start;
	while(ptr!=NULL){
		printf("x : %d\ny : %d\n",ptr->x,ptr->y);
		ptr = ptr->next;
	}
}
