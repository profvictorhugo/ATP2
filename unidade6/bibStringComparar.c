#include <stdio.h>
#include <string.h>

/**
 * usando a biblioteca string.h
 * comparando strings
 */

int main() {
    char a[] = "abc";
    char b[] = "abc";
    int stc = strcmp(a, b);
    if (strcmp(a, b) == 0) {
        printf("Strings iguais\n");
    } else {
        printf("Strings diferentes\n");
    }

    return 0;
}