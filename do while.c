#include<stdio.h>

int main(){
int i,c,n,a;

  scanf("%d",&n);
  c = 0;
do{
  n = n/10;
  c++;
} while (n != 0);

printf("%d",c);

scanf("%d",&i);
do{
a = i%10;
printf("%d",a);
i = i/10;
} while (i != 0);


}

