#include <stdio.h>

int main(){
    int i,j, n,k,p;
    scanf("%d",&n);

    for(j=0; j<n ;j++){


        for(i=j; i >=0 ;i--){

       printf("%d",i);

        }


   k=1;
        for(i =(j+1); i < n ; i++){

            printf("%d",k++);
        }








        printf("\n");

    }
}
