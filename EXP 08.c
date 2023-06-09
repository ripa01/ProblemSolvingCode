#include<stdio.h>

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if (b < a)
        swap(&a, &b);

    if (c < b)
        swap(&b, &c);

    if (b < a)
        swap(&a, &b);

    if (d < c)
        swap(&c, &d);

    if (c < b)
        swap(&b, &c);

    if (b < a)
        swap(&a, &b);

    printf("%d %d %d %d",a,b,c,d);

    return 0;
}
