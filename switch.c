#include<stdio.h>
int main(){


int a,b,c;
scanf("%d %d %d",&a,&b,&c);

switch (((a > b) && (a > c)) ? 1: -1) {
case 1:
    printf("a is the boss");
    break;

default:
    printf("a is not the boss");

}
}
