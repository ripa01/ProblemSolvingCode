#include<stdio.h>

int main(){

    int a[100],i,n,p;
    printf("Number of array elements:");
    scanf("%d",&p);
    printf("Input Array Elements:");

    for(i=0;i<p;i++){
        scanf("%d",&a[i]);
    }

    printf("Which position you want to delete:");
    scanf("%d",&n);
    a[n]=0;

    for (i=n; i<p-1; i++){
        a[i]=a[i+1];
    }

    printf("Final Array Elements:");
    for(i=0;i<p-1;i++){

        printf("%d ",a[i]);
    }

  printf("\n");
  return 0;

}
