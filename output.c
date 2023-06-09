
#include<stdio.h> // pointer

int main(){

    int a[5]={10,3,7,98,7};
    int *p;

p = &a[2];

printf("%d ",++(*p));




}
