//code to convert decimal into binary
#include <stdio.h>

int main() {
    int num;
    int binary = 0;
    int place = 1; 

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Decimal: %d -> ", num);

    while (num > 0) {
        int remainder = num % 2;
        
        binary = binary + (remainder * place);
        
        place = place * 10; 
        num = num / 2;  
    }

    printf("Binary: %d", binary);

    return 0;
}

