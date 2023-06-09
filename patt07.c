#include <stdio.h>

int main()
{
   int i,j,spc,rows,k,t=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);

   spc=rows+4-1;// khali box songkha

   for(i=1;i<=rows;i++)// row print korar jonno
   {
 for(k=spc;k>=1;k--)
            {
              printf(" ");// samner space er jonno
            }

	   for(j=1;j<=i;j++)// j er man i porjonto print hobe
	   printf("%d ",t++);//t hocche 1 theke 2 te newer jonno

	printf("\n");//noton line er jonno

    spc--;// majher space er jonno

   }
}

