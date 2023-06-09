#include<stdio.h>
main()
{
float a, b, c;

scanf("%f", &a);
while(a<0 || a>10){
printf("nota invalida\n");
scanf("%f", &a);
}
scanf("%f", &b);
while(b<0 || b>10){
printf("nota invalida\n");
scanf("%f", &b);
}
c=(a+b)/2;
printf("media = %.2f\n", c);

return 0;
}
