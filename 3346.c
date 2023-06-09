#include <stdio.h>
int main()
{
    float p, n;
    scanf("%.2f %.2f",&n,&p);

    printf("%.6f",((100.00+n)*(p/100.00+1)-100.00));

    return 0;
}
