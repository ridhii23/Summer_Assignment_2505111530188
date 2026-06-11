#include <stdio.h>

int main() {
    int min, max, isPrime;

    printf("Enter the minimum range: ");
    scanf("%d", &min);
    printf("Enter the maximum range: ");
    scanf("%d", &max);

    printf("Prime numbers in this range are:\n ", min, max);

    for (int i = min; i <= max; i++) {
    
        if (i <= 1) {
            continue; 
        }

        isPrime = 1; 

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;       
            }
        }

        if (isPrime == 1) {
            printf("%d  ", i);
        }
    }

    printf("\n");
    return 0;
}

