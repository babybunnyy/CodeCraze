#include <stdio.h>

int main(void){
	int a[5]={5,4,3,2,1};
	int swap;
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(a[i]>a[i+1]){
				swap = a[i];
				a[i] = a[i+1];
				a[i+1] = a[i];
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
