//code to find sum of digits of a number
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        sum += n % 10;  // add the last digit to the sum
        n /= 10;       // removes the last digit from the number
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}