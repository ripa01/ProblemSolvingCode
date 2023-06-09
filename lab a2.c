#include<stdio.h>


int main()
{
    char str[100];

    int i;

    char sv[] = {'a','A','e','E','i','I','o','O', 'U','u','\0'};

    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != sv[]){
            str[i] = str[i] - 32;
        }
    }
    printf("%s\n", str);

    return 0;
}
