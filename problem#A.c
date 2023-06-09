#include<stdio.h>

int main(){

    int a[100],i,n,m,p;
    printf("Number of array elements:");
    scanf("%d",&p);
    printf("Input Array Elements:");

    for(i=0;i<p;i++){
        scanf("%d",&a[i]);
    }

    printf("Which position you want to update:");
    scanf("%d",&n);

    printf("Which Number you want to update:");
    scanf("%d",&m);

   a[n]=m;

    printf("Final Array Elements:");

    for(i=0;i<p;i++){
        printf("%d ",a[i]);
    }
  printf("\n");
  return 0;

}
