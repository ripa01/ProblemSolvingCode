#include<stdio.h>
#include <stdint.h>
int main ()
{
    signed int i, n, number;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &number);

        if(number % 3 == 0 && number % 5 == 0)
            printf("FizzBuzz\n", i);
        else if(number % 3 == 0)
            printf(" Fizz\n", i);
        else if(number % 5 == 0)
            printf(" Buzz\n", i);
        else
            printf("\n", i);
    }

}
