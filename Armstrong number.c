#include<stdio.h>

int main(){
    int n,sum=0,temp,r;

printf("Enter an integer: ");

scanf("%d",&n);
temp=n;
while(n>0){

    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}
if(temp==sum){
    printf("%d is an Armstrong number",temp);
}
else
printf("%d is not Armstrong number",temp);

return 0;
}
