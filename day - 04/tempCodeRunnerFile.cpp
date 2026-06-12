//code to find nth fibonacci term
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, nextTerm = 0;

   
    printf("Enter the nth position of the Fibonacci term: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The 1st Fibonacci term is: %d\n", a);
    } 
    else if (n == 2) {
        printf("The 2nd Fibonacci term is: %d\n", b);
    } 
    else if (n <= 0) {
        printf("Please enter a valid positive position.\n");
    } 
    else {
       
        for (int i = 3; i <= n; i++) {
            nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
        printf("The nth Fibonacci term is: %d",  b);
    }

    return 0;
}
