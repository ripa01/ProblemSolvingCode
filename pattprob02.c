
#include<stdio.h>

int main(){
int n,i,j,q;

scanf("%d",&n);

q=(n*2)-1;

for(i=1;i<=q;i++){


    for(j=1;j<=q;j++){


     if(i==1 || i==q || j==1 || j==q){

            printf("%d",n);}



      else { if(i==2 || i==(q-1)|| j==2 || j==(q-1)){

            printf("%d",n-1);}
            else

            {
                if(i==3 || i==(q-2)|| j==3 || j==(q-2)){

            printf("%d",n-2);}

               else{ printf("%d",n-3);}

               }

            }


}
printf("\n");

}




return 0;

}
