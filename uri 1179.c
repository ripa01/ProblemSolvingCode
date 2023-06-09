#include <stdio.h>
int main()
{
    int par[5],impar[5],i,j,a,k=0,l=0,p;

   for(i=0; i<15; i++){
        scanf("%d", &a);

        if(a%2 ==0)
        {
            par[k]=a;
            k++;

            if(k == 5){
            for(j=0; j<5; j++)
                printf("par[%d] = %d\n", j,par[j]);
            k=0;

            }
        }
     else
        {

            impar[l]=a;
            l++;

            if(l == 5){

            for(p=0; p<5; p++)

                printf("impar[%d] = %d\n", p,impar[p]);
            l=0;

            }
        }

   }

         for(p=0; p<l; p++)
                printf("impar[%d] = %d\n", p,impar[p]);



        for(j=0; j<k; j++)
                printf("par[%d] = %d\n", j,par[j]);


    }

