//convert lowercase letter to uppercase
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the lowercase letter :");
    scanf("%c", &ch);
    
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("uppercase letter : %c", ch);
    }
    else
    {
        printf("not a lowercase character");
    }
    
    return 0;
}
