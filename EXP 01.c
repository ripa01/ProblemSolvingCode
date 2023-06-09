#include<stdio.h>

int main(){
float d,h,s;
scanf("%f %f",&d,&h);

s=(d*1000)/(h*60*60);
printf("Speed = %.6f m/s\n",s);
return 0;
}
