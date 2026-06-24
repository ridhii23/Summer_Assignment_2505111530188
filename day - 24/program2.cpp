//compress a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count;

    printf("Enter a string: ");
    // Reads the full line, including spaces
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Compressed string: ");
    
    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        // Count how many times the current character repeats consecutively
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Print the character and its count, followed by a space for gap
        printf("%c%d ", str[i], count);
    }

    printf("\n");
    return 0;
}
