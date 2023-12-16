#include <stdio.h>
#include <stdlib.h>

// dynamically allocate memory for strings

char * allocateString(int numChars);

int main(void) {
    int lengthLight, lengthDark;
    char *strLight, *strDark;
    
    scanf("%d %d", &lengthLight, &lengthDark); 
    strLight = allocateString(lengthLight);

    strDark = allocateString(lengthDark);

    scanf("%s", strLight);
    scanf("%s", strDark);
    printf("Local settings: %s - %s\n", strLight, strDark);
    free(strLight);
    free(strDark);
	
    return 0;
}

char * allocateString(int numChars){
    char *ptr;
    ptr = (char *) malloc(sizeof(char));

    
    return ptr;
}
