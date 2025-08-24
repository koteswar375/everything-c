#include <stdio.h>
#include <stdlib.h>

// argc: number of arguments
// argv: arguments array
// envp: environment variables array
// getenv: get environment variable
// setenv: set environment variable
int main(int argc, char **argv, char **envp) {
    for(int i=0; envp[i] != NULL; i++) {
        printf("argp[%d]: %s\n", i, envp[i]);
    }
    printf("PATH: %s\n", getenv("PATH"));
    printf("HOME: %s\n", getenv("HOME"));
    setenv("TEST", "123", 1);
    printf("TEST: %s\n", getenv("TEST"));
    return 0;
}