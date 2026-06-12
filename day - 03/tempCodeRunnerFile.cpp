//code to find LCM of two numbers
#include <stdio.h>

int main() {
    int a, b, n1, n2, temp, gcd , lcm;

 
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
    lcm= (a*b)/gcd;
    
    printf("The LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}