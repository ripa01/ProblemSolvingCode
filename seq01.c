#include<stdio.h>
#include <stdbool.h>

 void func(int a,int b,int c){

   int sum =a+b+c+1;

   printf(" %d",sum);

   if(sum <=500){

    func(b,c,sum);

    return;
   }
 }


int main(){
  int a,b,c,n;
  a = 0;
  b= 1;
  c = 2;

  printf("%d %d %d",a,b,c);

  func(a,b,c);

  return 0;



}
