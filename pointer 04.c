#include <stdio.h>
main()
{
char st[] = "The sky is the limit";
char st2[80];
char *p,*q,t;
p= st;
while(*p) p++;
p--;

q= st2;
//using additional arrays
while(p >= st) *q++ = *p--;
*q = '\0';
puts(st2);
puts("\n");
puts(st);
puts("\n");
p= q = st;
while(*p) p++;
p--;

// reversing without additional array
while(q<p)
{
t = *p;
*p = *q;
*q = t;
p--;
q++;
}
puts(st);
}
