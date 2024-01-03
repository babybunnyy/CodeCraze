#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct id{
	int num;
	char iname[20];
	struct id * next;
};
struct id *createDS(int val,char iname[]);
struct id *append(struct id *,struct id *);
int main(void){
	struct id *ptr;
	int n1,n2,n3;
	
	printf("enter the three id numbers of your employees: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	ptr = createDS(n1,"first");
	struct id *firstaddy, *start;
	start = ptr;
	firstaddy = ptr;
	ptr = createDS(n2,"second");
	firstaddy = append(firstaddy,ptr);
	ptr = createDS(n3,"third");
	firstaddy = append(firstaddy,ptr);

	while(start != NULL){
		printf("%d %s",start->num,start->iname);
		start = start->next;
	}

}
struct id *createDS(int val,char iname[]){
	struct id *ptr;
	ptr = (struct id*)malloc(sizeof(struct id));
	ptr->num = val;
	strcpy(ptr->iname,iname);
	ptr->next = NULL;
	return ptr;
}
struct id *append(struct id * first,struct id *second){
	first->next = second;
	first = second;
	return first;
}
