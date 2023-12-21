#include <stdio.h>

struct point{
	int x;
	int y;
	struct point *next;
};
int main(void){
	struct point pt1 = {1,1,NULL};
	struct point pt2 = {2,2,NULL};
	struct point pt3 = {3,3,NULL};
	
	pt1.next = &pt2;
	pt2.next = &pt3;

	struct point *ptr;
	ptr = &pt1;
	while(ptr!=NULL){
		printf("(%d,%d)\n",ptr->x,ptr->y);
		ptr = ptr->next;
	}
}
