#include <stdio.h>
#include <string.h>

int str_len(char *str) {
    int offset = 0;
    while(str[offset] != '\0') {
        offset++;
    }
    return offset;
}

void str_cpy(char *from, char *to) {
    int offset = 0;
    while(from[offset] != '\0') {
        to[offset] = from[offset];
        offset++;
    }
    to[offset] = '\0';
}

int str_cmp(char *str1, char *str2) {
    int offset = 0;
    while(str1[offset] != '\0' && str2[offset] != '\0') {
        if(str1[offset] != str2[offset]) {
            return str1[offset] - str2[offset];
        }
        offset++;
    }
    return str1[offset] - str2[offset];
}

void str_reverse(char *str) {
    int len = str_len(str);
    printf("len: %d\n", len);

    for(int offset = 0; offset < len/2; offset++) {
        char temp = str[offset];
        str[offset] = str[len - offset - 1];
        str[len - offset - 1] = temp;
    }
}

int main() {
    char *str1 = "Hello, World!";
    char str2[] = "Hello, World! I am string 3";

    char str3[100];

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    printf("str1 length: %lu\n", strlen(str1));
    printf("str2 length: %lu\n", strlen(str2));

    printf("str1 length: %d\n", str_len(str1));
    printf("str2 length: %d\n", str_len(str2));

    str_cpy(str1, str3);
    printf("str3: %s\n", str3);

    printf("str1 == str2: %d\n", str_cmp(str1, str2));
    printf("str1 == str3: %d\n", str_cmp(str1, str3));

    str_reverse(str2);
    printf("str2: %s\n", str2);

    return 0;
}