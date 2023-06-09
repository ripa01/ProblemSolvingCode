#include<stdio.h>

int main(){

    int a[100],i,p;
    printf("Number of array elements:");
    scanf("%d",&p);
    printf("Input Array Elements:");

    for(i=0;i<p;i++){
        scanf("%d",&a[i]);
    }


    printf("Reverse Array Elements:");
    for(i=p-1;i>=0;i--){

        printf("%d ",a[i]);
    }

  printf("\n");
  return 0;

}
