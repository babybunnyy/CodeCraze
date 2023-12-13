#include <stdio.h>
#include <stdbool.h>

// this program computes the total number of bytes required based on user-input data. 

int main(void){
	int n; // number of inputs
	scanf("%d",&n);
	int i;
	int length[101];
	char type[101];
	bool valid = true;
	int bytes = 0;
	for(i=0;i<n;i++){
		scanf("%d %c",&length[i],&type[i]);
		if(type[i] == 'i'){
			bytes += length[i] * sizeof(int);
		}else if(type[i] == 'd'){
			bytes += length[i] * sizeof(double);
		}else if(type[i] == 'c'){
			bytes += length[i] * sizeof(char);
		}else{
			valid = false;
		}
	}
	if(valid){
		printf("%d\n",bytes);
	}else{
		printf("Invalid tracking code type\n");
	}
	return 0;
}

