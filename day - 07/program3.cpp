//code for recursive sum of digits
#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + sum(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits is: %d\n", sum(num));

    return 0;
}
