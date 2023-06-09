#include<stdio.h>

int main()
{
int n,s=0,i,j;


  scanf("%d", &n);


  for (i = 1; i <= n; i++)
  {
    scanf("%d", &j);
    s = s + j;
  }
 printf("%d",s);

    return 0;
}
