
#include<stdio.h>

int main(){
 int i,a,b,j;
 scanf("%d",&a);

for(i=1;i<=a; i++){
if((a%i) == 0){
    printf("%d ",i);
 }
}
scanf("%d",&b);
 for(j=1;j<=b; j++){
if((b%j) == 0){
    printf("%d ",j);
 }

}
return 0;


}
