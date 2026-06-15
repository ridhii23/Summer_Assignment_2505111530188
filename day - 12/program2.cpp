//code to write function for armstrong
#include <stdio.h>

int isArmstrong(int num) {
    int ogNum = num;
    int sum = 0;
    int rem;

    while (num > 0) {
        rem = num % 10;                    
        sum = sum + (rem * rem * rem);
        num = num / 10;                         
    }

    if (sum == ogNum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Enter a 3-digit integer: ");
    scanf("%d", &n);

   //function calling
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.", n);
    } else {
        printf("%d is not an Armstrong number.", n);
    }

    return 0;
}
