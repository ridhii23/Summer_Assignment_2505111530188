//code to count set bits in a number.
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 
    while (num > 0) {
       
        if (num & 1) {
            count++;
        }
        num = num >> 1;
    }

    printf("Total set bits in %d is: %d", original, count);
    return 0;
}
