#include <stdio.h>
#include <stdlib.h>
// pass numbers to a program from the command line 
int main(int argc, char *argv[]){
	int a ;
	double f;
	if (argc == 3){
	printf("%d plants for %.2f dollars each cost %.2f\n",atoi(argv[1]),atof(argv[2]),atof(argv[2])*atoi(argv[1]));
	} else {
		printf("Invalid input.\n");
	}
	return 0;
}
