#include <stdio.h>

int main() {
    int a, b, n1, n2, temp, gcd;

 
    printf("Enter the two numbers : ");
    scanf("%d %d", &a,&b);
   
    n1 = a;
    n2 = b;
    while (n2 != 0) {
        temp = n2;
        n2 = n1 % n2; 
        n1 = temp;    
    }

    gcd = n1; 

    printf("The GCD of %d and %d is: %d\n", a, b, gcd);

    return 0;
}
