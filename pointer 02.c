#include<stdio.h>
main()
{
int x[5] = {10,3,7,98,7};
int *p;
p = &x[2];



printf("%d\n", ++(*p));

printf("%d %d",p,p+2);
}
