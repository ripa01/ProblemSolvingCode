#include<stdio.h>


int main(){
float b,b1,b2,bn,r;
int n;
printf("Enter balance:");

scanf("%f",&b);
printf("Enter rate: ");
scanf("%f",&r);
r =r/100;
b1 = b+ (b*r);
b2 = b1 + (b1*r);
printf("How many years?");
scanf("%d",&n);
bn = b* pow(1+r,n);

printf("%.2f %.2f %f",b1,b2,bn);


}



