#include<stdio.h>

int digSum(int n)
{
    int sum = 0;

    while(n > 0 || sum > 9)

    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }

        sum += n % 10;

        n /= 10;
    }
    return sum;
}

int main()
{
    int n,s;
    printf("INPUT: ");

    scanf("%d",&n);

    s = digSum(n);

    printf("\nOUTPUT: %d",s);

    return 0;
}
