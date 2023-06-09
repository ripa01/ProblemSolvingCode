#include <stdio.h>
#define pi 3.141592653

int main() {
  float n,r,area=0,a;

  scanf("%f", &n);



  for (int i = 0; i < n; ++i) {
    scanf("%f %f", &r,&a);
   area = (a/360)* pi * r*r;


    printf("%.9f\n",area);
  }

}
