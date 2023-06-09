#include<stdio.h>

int main(){

float L,pi,c,s,g;
scanf("%f",&L);
pi = 3.1416;
c = pi*(L/2)*(L/2);
printf("Circle = %f\n",c);
s = L*L;
printf("Square = %f\n",s);
g = (s-c);
printf("Gray Part = %f\n",g);
return 0;
}
