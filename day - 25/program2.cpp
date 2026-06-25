//find common characters in strings.
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int i, j, k, found;
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin); 

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    printf("Common characters: ");
    for(i = 0; s1[i] != '\0' && s1[i] != '\n'; i++)
    {
        found = 0;
        for(k = 0; k < i; k++)
        {
            if(s1[i] == s1[k])
            {
                found = 1;
                break;
            }
        }

        if(found)
            continue;
        for(j = 0; s2[j] != '\0' && s2[j] != '\n'; j++)
        {
            if(s1[i] == s2[j])
            {
                printf("%c ", s1[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
