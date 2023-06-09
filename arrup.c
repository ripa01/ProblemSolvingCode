#include<stdio.h>
void main()
{
    int L []={9,3,5,7,8,11,23,14,16,25};
    int k=3, n=10, item=10;
    int i,j;

    printf("Array Elements are: \n");


    for(i=0; i<n; i++){
            printf("L[%d]= %d \n", i, L[i]);

    }
    L[k-1]=item;

    printf("After Update : \n");

    for(i=0; i<n; i++){
        printf("L[%d]= %d \n", i, L[i]);
    }
}
