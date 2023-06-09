#include<stdio.h>

int func(int x){

   x = ((x*x)+(4*x)+4);

   return x;
}

int main(){

    int array [10],new_array[10];

    int i;

    for(i=0; i<10; i++){

        scanf("%d",&array[i]);
    }

    for(i=0; i<10; i++){

        new_array[i]= func(array[i]);

        printf("%d ",new_array[i]);
    }

    printf("\n");

    return 0;
}

