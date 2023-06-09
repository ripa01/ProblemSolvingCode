#include<stdio.h>

int main(){

int i,rev=0;
scanf("%d",&i);

while(i>0){
        rev = (rev*10)+i%10;
        i=i/10;
    }
    printf("%d ",i);

       return 0;

    }


