//code to convert binary into decimal
#include <stdio.h>

int main() {
    int binary, decimal = 0;
    int weight = 1; 
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        int last_digit = binary % 10; 
        
        decimal = decimal + (last_digit * weight); 
        
        weight = weight * 2;         
        binary = binary / 10;        
    }
    printf("Decimal value: %d", decimal);

    return 0;
}
