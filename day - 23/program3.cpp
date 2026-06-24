//code to check anagram strings.
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int f1[256] = {0}, f2[256] = {0};
    int i, result = 1;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    if(strlen(s1) != strlen(s2))
    {
        printf("Not Anagrams");
        return 0;
    }

    for(i = 0; s1[i] != '\0'; i++)
    {
        f1[(unsigned char)s1[i]]++;
        f2[(unsigned char)s2[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(f1[i] != f2[i])
        {
            result = 0;
            break;
        }
    }

    if(result)
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}

