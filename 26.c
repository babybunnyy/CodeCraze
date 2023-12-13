#include <stdio.h>

// memory usage displayed

int main(void) {
    char type;
    int length;
    scanf("%c %d", &type, &length);

    int result = 0;
    if (type == 'i') {
        result = length * sizeof(int);
    } else if (type == 'd') {
        result = length * sizeof(double);
    } else if (type == 'c') {
        result = length * sizeof(char);
    }

    int B, KB, MB;

    if (result < 1000) {
        printf("%d B\n", result);
    } else if (result >= 1000000) {
        MB = result / 1000000;
        KB = (result % 1000000) / 1000;
        B = result % 1000;
        printf("%d MB and %d KB and %d B\n", MB, KB, B);
    } else if (result >= 1000) {
        KB = result / 1000;
        B = result % 1000;
        printf("%d KB and %d B\n", KB, B);
    }

    return 0;
}

