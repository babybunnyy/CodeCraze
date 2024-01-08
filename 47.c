#include <stdio.h>
#include <stdlib.h>
struct point{
	int x;
	struct point * next;
};
struct point *insertIntoSorted(struct point *currentList, struct point *newDigit);
struct point *sortedcopy(struct point *start);
struct point *reversepoint(struct point *start);
struct point *appendtofront(struct point *oldptr,struct point *newptr);
struct point *readpoint();
struct point *creatept(int a);
struct point *append(struct point *op,struct point *npt);
void printpoint(struct point *start);
void freepoint(struct point *start);
int main(void){
	struct point *start, *ptr, *backwards, *sorted;
	printf("Please enter a number: ");
	start = readpoint();
	printf("you entered: \n");
	printpoint(start);
	printf("backwards: \n");
	backwards = reversepoint(start);
	printpoint(backwards);
	printf("sorted by digit: \n");
	sorted = sortedcopy(start);
	printpoint(sorted);
	freepoint(backwards);
	freepoint(sorted);
	freepoint(start);
	return 0;
}
struct point *insertIntoSorted(struct point *currentList, struct point *newDigit) {
    struct point *currentNode = currentList;
    struct point *previousNode = NULL;

    // Find the right spot to insert the new digit
    while (currentNode != NULL && currentNode->x < newDigit->x) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }

    // Insert the new digit at the correct position
    if (previousNode == NULL) {
        // Insert at the beginning if the new digit is smaller than all existing digits
        newDigit->next = currentList;
        currentList = newDigit;
    } else {
        // Insert in the middle or at the end
        previousNode->next = newDigit;
        newDigit->next = currentNode;
    }

    return currentList;
}

struct point *sortedcopy(struct point *start){
	struct point *first,*oldptr, *newptr;
	first = NULL;
	while (start!=NULL){
		if(first==NULL){
			first = creatept(start->x);
			newptr = first;
		}else{
			newptr = creatept(start->x);
			first = insertIntoSorted(first,newptr);
		}
		start = start->next;
	}
	return (first);
}
		
struct point *reversepoint(struct point *start){
	struct point *first, *newptr;
	first = NULL;
	while(start!=NULL){
		if(first == NULL){
			first = creatept(start->x);
			newptr = first;
		}else{
			newptr = creatept(start->x);
			first = appendtofront(first,newptr);
		}
		start = start->next;
	}
	return(first);
}
struct point * appendtofront(struct point *oldptr,struct point *newptr){
	newptr->next = oldptr;
	return (newptr);
}
struct point *readpoint(){
	struct point *start,*oldptr,*newptr;
	start = NULL;
	char c;
	scanf("%c",&c);
	int d;
	while(c!='\n'){
		d = c - 48; 
		newptr = creatept(d);
		if(start == NULL){
			start = newptr;
			oldptr = start;
		}else{
			oldptr = append(oldptr,newptr);
		}
		scanf("%c",&c);
	}
	return (start);
}
struct point *creatept(int a){
	struct point * ptr;
	ptr = (struct point*)malloc(sizeof(struct point));
	ptr->x = a;
	ptr->next = NULL;
	return (ptr);
}
struct point *append(struct point *op,struct point *npt){
	op->next = npt;
	return npt;
}
void printpoint(struct point *start){
	while(start!=NULL){
		printf("(%d)\n",start->x);
		start = start->next;
	}
}
void freepoint(struct point *start){
	struct point *ptr = start;
	while(start!=NULL){
		ptr = start->next;
		free(start);
		start = ptr;
	}
}
		
		
