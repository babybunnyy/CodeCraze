#include <stdio.h>
#include <stdbool.h>

#define FILENAME_MAX 4096
#define MAX_SIZE 2828

int main(void)
{
    FILE * rfile;
    FILE * wfile;

    char filename[FILENAME_MAX];

    printf("What file do you want to copy ? ");
    scanf("%s",filename);


    rfile = fopen(filename,"r");
    wfile = fopen("copy.txt","w");

    if(rfile == NULL)
    {
        printf("Failed to open file");
        return 1;
    }

    char buffer[MAX_SIZE];    
    int current_char = 0;
    bool reading_file = true;

    while((buffer[current_char] = fgetc(rfile)) != EOF)
    {
        fputc(buffer[current_char],wfile);
        current_char++;
    }
    
    if(feof(rfile))
    {
        printf("FILE WAS COPIED SUCCESSFULLY\n");
    } else
    {
        printf("FAILED TO COPY FILE\n");
    }
    printf("Number of characters is %d\n", current_char);

    fclose(rfile);
    fclose(wfile);

    return 0;
}