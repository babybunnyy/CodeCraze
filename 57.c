#include <stdio.h>

int main(void)
{
    for(int i = 4; i > 0; i--)
    {
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = i-1; j < 4; j++)
            printf("#");
        for(int j = 0; j < 2; j++)
            printf(" ");
        for(int j = i-1; j < 4; j++)
            printf("#");
        printf("\n");
    }
}
