
#include <stdio.h>

// write to join/concatenate two strings

void string_concat(char s1[], char s2[], char result[])
{
    int i ,j ;

    for(i=0, j=0 ; s1[i] != '\0'; i++,j++)
    {
        result[j] = s1[i];
    }

    for(i=0; s2[i] != '\0'; i++, j++)
    {
        result[j] = s2[i];
    }

    result[j] = '\0';
}


int main()
{
    char country1[20] = "Bangla";
    char country2[20] = "desh";

    char country3[40];

    string_concat(country1,country2,country3);
    puts(country3);

    gets(country1);
    gets(country2);
    string_concat(country1,country2,country3);
    puts(country3);
}
