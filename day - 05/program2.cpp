//code to check strong number
#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        
        sum += factorial;
        temp /= 10; 
    }

    if (sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is not a Strong Number.\n", num);
    }

    return 0;
}

