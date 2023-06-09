#include<stdio.h>

int main(){
int i,n,s=0;
scanf("%d",&n);

for(i=n; i>0; ){

    s= (s*10) + i%10;
    i = i/10;
}
printf("%d",s);
return 0;

}
