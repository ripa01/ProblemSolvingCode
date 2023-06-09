#include<stdio.h>
int main()
{
int N,q,r,i;
scanf("%d", &N);
for(i=1;i<=N;i++)
{
q=i*i;
r=i*i*i;
printf("%d %d %d\n",i,q,r);
printf("%d %d %d\n",i,q+1,r+1);
}
return 0;
}
