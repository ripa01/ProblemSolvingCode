#include<stdio.h>

int main(){

int a,b;
int *p,*q;

p = &a;
q = &b;

a= 30;
b =50;


printf("value %d address %d and increase %d\n",a,p,p++);

printf("value %d address %d and increase %d\n",b,q,q++);


int i=5;

int *ip = &i;

printf(" value 2: %d\n",*ip);

int j = 3;

ip = &j;

printf("value 3: %d\n",*ip);

int *ip2;

ip2 = ip;

printf("value 4: %d\n",*ip);


ip = &i;

printf("value 5: %d\n",*ip);


return 0;


}
