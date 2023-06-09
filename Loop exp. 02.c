#include<stdio.h>

int main(){
int a,b,i;
scanf("%d %d",&a,&b);

for(i=b; i>=a; i=i-1){

    printf("%d ",i);
}
return 0;

}
