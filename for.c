#include<stdio.h>


int main(){
int i=0, j=0,s = 0;

for(i = 1; i <6 ; i++){

 for(j = i; j <6 ; j+2){
      s = s + i+j;
 }
}
printf("%d\n",s);
}
