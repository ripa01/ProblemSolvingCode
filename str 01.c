
#include <stdio.h>

// write to compare two strings
// A<B : -1
// A>B : +1
// A==B: 0

// loop through the strings and check if any character is greater
// loop until any string becomes empty

int string_compare(char s1[], char s2[])
{
    int i;
    for(i=0; s1[i] != '\0' && s2[i] !='\0' ;i++ )
    {
        if(s1[i]<s2[i]) return -1;
        if(s1[i]>s2[i]) return +1;

        else return 0;
    }

}


int main()
{
    char country1[20] ;
    char country2[20] ;

    int result;


    while(1)
    {
        gets(country1);
        gets(country2);

        result = string_compare(country1,country2);
        printf("%d\n",result);
    }

    return 0;
}

