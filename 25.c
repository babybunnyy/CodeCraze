#include <stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	int num[100];
	char type[100];
	int bytes = 0;
	for(int i=0;i<n;i++){
		scanf("%d %c",&num[i],&type[i]);
		if(type[i] == 'c'){
			bytes += num[i];
		}else if(type[i] == 'i'){
			bytes += (num[i] * 4);
		}else if(type[i] == 'd'){
			bytes += (num[i] * 8);
		}	
	}
	for(int i=0;i<n;i++){
		if(type[i] == 'c' || type[i] == 'd' || type[i] == 'i'){
			printf("%d bytes",bytes);
		}else {
			printf("Invalid tracking code type");
		}
	}
}
