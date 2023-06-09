#include<stdio.h>

void TOH(int,char,char,char);

void main()
{
int n;

int count=0;

printf("How many plates?\n");

scanf("%d",&n);

TOH(n,'A','B','C');

count++;

}

void TOH(int n,char x,char y,char z)
{

if(n>0)
{

 TOH(n-1,x,z,y);

 printf("\n%c -> %c",x,y);

  TOH(n-1,z,y,x);



  }

}
