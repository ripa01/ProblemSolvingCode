#include<stdio.h>

int main(){
int n,i,j,k;

scanf("%d",&n);



for(i=1;i< (n*2);i++){
   k=n;

   if(i<=n){


    for(j=1;j<(n*2);j++){

            printf("%d",k);

         if(i>j)
                k=k-1;
                if(i+j >= (n*2))
                   k=k+1;


            }

}

if(i>n){


    for(j=1;j<(n*2);j++){

            printf("%d",k);

            if(j>=i)
                k=k+1;
                if(i+j < (n*2))
                   k=k-1;


            }

}


printf("\n");

}




return 0;

}
