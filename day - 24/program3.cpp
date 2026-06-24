//find longest word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    int currlen = 0, maxlen = 0;
    int start = 0, maxstart = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            currlen++;
        } else {
            if (currlen > maxlen) {
                maxlen = currlen;
                maxstart = start;
            }
            currlen = 0;
            start = i + 1;
        }
    }

    printf("Longest word: ");
    for (i = maxstart; i < maxstart + maxlen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d", maxlen);

    return 0;
}
