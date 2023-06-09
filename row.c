#include<stdio.h>
int main(){

int i, space,rows, k=0, count= 0, countl= 0;

printf("Enternumber: of rows:");

scanf("%d",&rows);

for(i=1;i<=rows;++i) {
for (space=1;space<= rows-i;++space) {
    printf(" ");
  ++count;}
   while(k!= 2*i-1) {
   if(count<=rows-1){
   printf("%d", i+k);
     ++count;}
  else {
    ++countl;
 printf ("%d",(i+k- 2*countl));
  }
 ++k;
}
countl= count = k = 0;
printf ("\n") ;
}
}
