#include<stdio.h>

int main(){
int i,n,s=0,z,x,r=0;
scanf("%d",&n);
for(i=n; i>0; ){

    s= (s*10)+ i%10;
    i= i/10;
}
z= n+s;
x=z;
while(z>0){

    r =(r*10) + z%10;
    z = z/10;
}
if(r == x) printf("Palindrome\n",x);
else printf(" Not Palindrome\n",x);
return 0;
}
