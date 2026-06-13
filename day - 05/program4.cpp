#include <stdio.h>

int main() {
    int num, original;
    int largest = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num; 
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            largest = i;  
            num /= i;     
        }
    }

    if (num > 1) {
        largest = num;
    }
    printf("Largest prime factor of %d is: %d\n", original, largest);

    return 0;
}


