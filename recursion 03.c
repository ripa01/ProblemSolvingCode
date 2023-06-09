#include <stdio.h>

int fact(n)
{
    if(n==1) return 1;
    return n * fact(n-1);
}


int main()
{
    int res = fact(3);
    printf("%d\n",res);

    return 0;
}
