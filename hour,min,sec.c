#include<stdio.h>


int main(){
int n,h,m,s;
printf("Enter seconds:");
scanf("%d",&n);
 h=n/3600;
 n= n%3600;
 m= n/60;
 s= n%60;

printf("HOUR:%d\nMIN:%d\nSEC:%d",h,m,s);

return 0;
}
