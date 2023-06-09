#include <stdio.h>
int main()
{  int i,j,r;
 float a=0,b=1;


 for(r=1;r<=3;r++ ) {

  for(i=a,j=b; i<=2 ;i=i+0.2, j=j+0.2)
printf("I=%d J=%d\n",i,j);


 }
    return 0;


}
