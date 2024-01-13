#include <stdio.h>
// pass arguments to a program from the command line 
int main(int argc, char **argv){
	printf("I have %d arguments from the command line: \n",argc);
	for(int i=0;i<argc;i++){
		printf("Argument %d is %s\n",i,argv[i]);
	}
	return 0;
}
