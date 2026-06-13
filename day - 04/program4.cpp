//code to print armstrong numbers in a range
#include <stdio.h>
int main() {
    int start, end, temp, rem, sum;

    printf("Enter starting 3-digit number : ");
    scanf("%d", &start);
    printf("Enter ending 3-digit number : ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum = sum + (rem * rem * rem); 
            temp = temp / 10;
        }

       
        if (sum == i) {
            printf("%d  ", i); 
        }
    }

    return 0;
}
