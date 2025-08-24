#include <stdio.h>
#include <stdlib.h>

// argc: number of arguments
// argv: arguments array
// atoi: convert string to integer. It converts non-numeric strings to 0.
int main(int argc, char *argv[]) {
    printf("argc: %d\n", argc);
    for(int i=0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    int sum = 0;
    for(int i =0; i < argc; i++) {
        printf("argv[%d]: %i\n", i, atoi(argv[i]));
        sum += atoi(argv[i]);
    }
    printf("sum: %d\n", sum);
    return 0;
}