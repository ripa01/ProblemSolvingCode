#include<stdio.h>
int main(){
int p,i;
float r,a,b,c;

 scanf("%d",&p);

for(i=1; i<=p; ++i){

scanf("%f %f %f",&a, &b, &c);
r = ((a*2)+(b*3)+(c*5))/10;

printf("%.1lf\n",r);
}

return 0;
}
