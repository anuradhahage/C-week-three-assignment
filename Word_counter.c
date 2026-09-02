#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char *ptr;
    int words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    while (*ptr != '\0') {
        if ((*ptr != ' ' && *ptr != '\n') &&
            (ptr == str || *(ptr - 1) == ' ')) {
            words++;
        }
        ptr++;
    }

    printf("Number of words = %d", words);

    return 0;
}
