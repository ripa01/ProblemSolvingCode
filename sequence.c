#include <stdio.h>

int add(int a,int b,int c,int cons) {
    int temp = a+b+c+cons;

  if (temp>100) {
    return;
  }
    else
    {
       printf("%d ",temp);
    }
     a=b;
     b=c;
     c= temp;
     add(a,b,c,temp);
  }




int main() {

  int a=0,b=1,c=2,cons=1;

    printf("%d %d %d",a,b,c);
    slove(a,b,c,cons);



  return 0;

}


