 #include <stdio.h>

int main()
{
   int i,j,spc,rows,k,t=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);



   for(i=1;i<=rows;i++){

	   for(j=1;j<=i;j++){

        if(i==j || (i-j)%2 == 0){
            printf("1");
        }
        else {printf("0");}
	   }


	printf("\n");
   }

}
