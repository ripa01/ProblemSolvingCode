
#include <stdio.h>
main()
{
char st[] = "The sky is the limit";
char *p,*q;
p= q = st;
while(*p) p++;
printf("Length is :%d",(p-q));
}
