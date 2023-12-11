#include <stdio.h>

// swap first and last name

int main(void){
	int i,n;
	scanf("%d",&n);
	char first[50],last[50];
	for(i=0;i<n;i++){
		scanf("%s %s",first,last);
		printf("%s %s\n",last,first);
	}
	return 0;
}

