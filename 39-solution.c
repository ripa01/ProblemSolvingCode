#include <stdio.h>

int main()
{
   int i,sum=0;

   printf("Numbers between 100 and 200, divisible by 9 :");

   for(i=101;i<200;i++)

   {
     if(i%9==0)
     {
       printf(" %d",i);
       sum+=i;
     }
   }
   printf("\n\The sum : %d \n",sum);
}

