
#include<stdio.h>

int main(){

int a=70,b=20;
int *p,*q;

p = &b;
q = &a;

a= b+*p;

q=p;
a=(*p)*(*q);
*p = a%b;
*q = a/b;



printf("value %d ",a);

printf("value %d \n",b);



}
