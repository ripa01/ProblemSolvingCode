#include <stdio.h>
#include<string.h>

int main()
{
    char str1[80], str2[80];

    int l, i, j;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);


   l = strlen(str2);

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
