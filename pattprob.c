#include <stdio.h>

int main()
{
   int i,j,r;
   printf("Input number of rows (half of the diamond) :");
   scanf("%d",&r);
   for(i=1;i<=r;i++)
   {
     for(j=i;j<=r;j++)
     printf(" ");
     for(j=1;j< i ;j++)
       printf("*");

        for(j=1;j<=i ;j++)
       printf("*");
     printf("\n");
   }

   for(i=1;i<=r;i++)
   {
     for(j=1;j<=i;j++)
     printf(" ");

     for(j=i;j<r;j++)
       printf("*");

       for(j=i;j<=r;j++)
       printf("*");

     printf("\n");
   }

}
